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

    output.clear();
}
void * networking::_start(void * that) {
    fprintf(stderr, "%s\n", "starting networking in another thread");
    return (reinterpret_cast<networking *>(that))->Loop();
}


int networking::request(requestEntity * entity) {
    this->method = options->hostname + entity->getUrl();
    printf("%s\n", method.c_str());
    setup();
    res = curl_easy_perform(curl);
    printf("%s\t\n", output.c_str());//, curl_easy_strerror(res));
    if (res != CURLE_OK)
        fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));
    return res;
}

void networking::setup() {
    output.clear();
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, reinterpret_cast<void *>(&output));
    curl_easy_setopt(curl, CURLOPT_URL, method.c_str());
}


size_t networking::WriteMemoryCallback(char *ptr, size_t size, size_t nmemb, void *data)
{
    size_t realsize = size * nmemb;
    std::string * str = reinterpret_cast<std::string *>(data);

    for (int i = 0; i < size * nmemb; i++) {
        str->push_back(ptr[i]);
    }

    str->push_back('\0');
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

    waitToNextSecond(); // wait a little.
    while (true) {

        printf("Loop\n");
        // gettimeofday(&currentTime, 0);
        clock_gettime(CLOCK_REALTIME, &spec);
        ms = (spec.tv_nsec / 1.0e6 ) + spec.tv_sec * 1000;
        waitToNextSecond();
        for (int i = 0; i < 3; ++i)
        {
            if ((tempRequestEntity = searchNextRequest()) != NULL) {
                /*perform request*/
                // printf("tempRequestEntity != NULL\n");

                tempRequestEntity->state = stateType::in_networking;
                request(tempRequestEntity);
                if (output.find("\"error\"") == output.npos) {
                    tempRequestEntity->responseEntity->rawResponse = output;
                    /**/
                    std::cout << output.max_size() << "\t" << output.capacity() << "\n";
                    tempRequestEntity->state = stateType::responsed;
                    *counterWaitingRequests--;
                } else {
                    options->sleep(20 * 1000);
                    tempRequestEntity->state = stateType::validated;
                }

                // gettimeofday(&lastThirdyCall, 0);

            }
        }
        // options->sleep(600);
    }
}

void networking::waitToNextSecond() {

    // timer.it_interval.tv_usec = 100;



    long newMS = ms;

    // int i = 1;
    // setitimer(2, &timer, 0);
    while ((newMS - ms ) < 1000) {
        clock_gettime(CLOCK_REALTIME, &spec);
        newMS = ( spec.tv_nsec / 1.0e6 ) + spec.tv_sec * 1000;
        // printf("%d\n", timer.it_value.tv_sec);
        // printf("%ld\t%ld\n", ms, newMS);
        options->sleep(100);
    };/*
    while ( timer.it_value.tv_usec > 0 ) {
        // printf("waitToNextSecond\t%s\n", ownVector->dataVector.front()->token.c_str());
        printf("waitToNextSecond\n");
        timer.it_interval.tv_sec = 0;

        options->sleep(400);
        // getitimer(&i, &timer);
        // gettimeofday(&currentTime, 0);

    }*/
    // timer.it_interval.tv_usec = 1050000;
    // printf("Done\n");
    // options->sleep(100);
}
