#pragma once
#include "networking.h"
networking::networking(int * requestCounterLocation, dataVectorType * ownVectorInput, optionsClass * optionsInput, pthread_t * workerThread) {
    ownVector = ownVectorInput;
    options = optionsInput;

    counterWaitingRequests = requestCounterLocation;
    curl = curl_easy_init();
    if (!curl) {
        fprintf(stderr, "%s\n", "failed to init curl");
    };


    // std::cout << j << std::endl;

    if (int iret1 = pthread_create(&thread1, NULL, _start, reinterpret_cast<void *>(this))) /*Threading magic*/
    {
        fprintf(stderr, "Error - pthread_create() return code: %d\n", iret1);
        exit(EXIT_FAILURE);
    }
    workerThread = &thread1;
};
networking::~networking() {
    curl_easy_cleanup(curl);

    delete output;
}
void * networking::_start(void * that) {
    fprintf(stderr, "%s\n", "starting networking in another thread");
    return (reinterpret_cast<networking *>(that))->Loop();
}


int networking::request(requestEntity * entity) {
    this->method = options->networking->hostname + entity->getUrl();
    // printf("%s\n", method.c_str());
    setup();
    res = curl_easy_perform(curl);
    if (res != CURLE_OK)
        fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));
    return res;
}

void networking::setup() {
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, reinterpret_cast<void *>(output));
    curl_easy_setopt(curl, CURLOPT_URL, method.c_str());
}


size_t networking::WriteMemoryCallback(char *ptr, size_t size, size_t nmemb, void *data)
{
    size_t realsize = size * nmemb;
    std::string * str = reinterpret_cast<std::string *>(data);
    str->append(ptr, realsize);
    return realsize;
}

requestEntity * networking::searchNextRequest() {
    for (auto i : ownVector->dataVector)
        if (i != NULL)
            if (i->state == stateType::validated) {
                return i;
            }
    return NULL;
}

void * networking::Loop() {
    clock_gettime(CLOCK_REALTIME, &spec);
    ms = (spec.tv_nsec / 1.0e6 ) + spec.tv_sec * 1000 + 800;
    while (options->networking->needed) {
        waitToNextSecond();
        for (int i = 0; i < 3; ++i)
        {
            if (i == 0)
            {
                clock_gettime(CLOCK_REALTIME, &spec);
                ms = (spec.tv_nsec / 1.0e6 ) + spec.tv_sec * 1000;
            };
            if ((tempRequestEntity = searchNextRequest()) != NULL) {
                tempRequestEntity->state = stateType::in_networking;
                output = new std::string;
                request(tempRequestEntity);
                tempRequestEntity->responseEntity->rawResponse = output;
                tempRequestEntity->state = stateType::responsed;
                (*counterWaitingRequests)--;


            };
        };
    };
};

void networking::waitToNextSecond() {
    long newMS = ms;
    while ((newMS - ms ) < 1000) {
        clock_gettime(CLOCK_REALTIME, &spec);
        newMS = ( spec.tv_nsec / 1.0e6 ) + spec.tv_sec * 1000;
        options->sleep(100);
    };
}
