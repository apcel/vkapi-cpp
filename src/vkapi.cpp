#pragma once
#include "vkapi.h"

vkapi::vkapi(optionsClass * newOptions) {
    options = newOptions;
    parsers.clear();
    spawnParsers();
    prepareNextEntity();
    STORAGE = new dataVectorVector(options);
    curl = curl_easy_init();
    if (!curl) {
        fprintf(stderr, "%s\n", "failed to init curl");
    };

}
vkapi::~vkapi() {
    curl_global_cleanup();
    clearEscaped();
    killParsers();
    parsers.clear();
    delete preparedRequest;
};


std::string vkapi::escape(std::string inputString) {
    if (escapedToClear.size() >= 20)
        clearEscaped();
    escapedToClear.push_back( curl_easy_escape(curl, inputString.c_str(), inputString.size()));
    if (escapedToClear.back() == NULL)
        return "\0";
    return std::string(escapedToClear.back());
}
std::string vkapi::unEscape(std::string inputString) {
    if (escapedToClear.size() >= 20 )
    {
        clearEscaped();
    }
    int * outl;
    escapedToClear.push_back(curl_easy_unescape(curl, inputString.c_str(), inputString.size(),  outl));
    return std::string(escapedToClear.back());
}

void vkapi::clearEscaped() {
    for (auto i : escapedToClear) {
        curl_free(i);
    };
    escapedToClear.clear();
}

void vkapi::spawnParsers() {
    // printf("here\n");
    for (int i = 0; i < options->parserThreads; ++i)
    {
        parsers.push_back(new parser(options));
    }
}

void vkapi::killParsers() {
    for (auto i : parsers)
        delete i;
}

void vkapi::prepareNextEntity() {
    preparedRequest = new requestEntity();

}

void vkapi::setMethod(std::string methodInput) {
    preparedRequest->method = methodInput;
    preparedRequest->state = stateType::under_construction;
}
void vkapi::addParameter(parameterNameType name, parameterNameValue value) {
    preparedRequest->requestParameters->addParam(name, escape(value));
};
requestKeyType vkapi::request() {
    validate();
    tokenType tempToken = preparedRequest->token;
    requestKeyType requestKey = createRequestKey(tempToken);
    preparedRequest->requestKey = requestKey;
    STORAGE->addToQueue(preparedRequest);
    prepareNextEntity();
    return requestKey;
}
void vkapi::validate() {
    preparedRequest->state = validated;
}
void vkapi::setToken(tokenType token) {
    preparedRequest->token = token;
}
requestKeyType vkapi::createRequestKey(tokenType token) {
    // long j = 0;
    // while (!token.empty()) {
    //     j += long(token.back());
    //     token.pop_back();
    // }
    std::hash<std::string> hash_fn;

    size_t inthash = hash_fn(token + std::to_string(rand() % 1207));
    std::string hash = std::to_string(inthash);
    // printf("%u\n", hash);
    return hash;
};
requestEntity * vkapi::find(requestKeyType key) {
    while (true) {
        for (auto i : STORAGE->dataVectorVectorEntity)
            for (auto j : i->dataVector)
                if (j->requestKey == key) {
                    return j;
                } else {
                    printf("%s\n", j->requestKey.c_str());
                };
        printf("FFUUUU\n");
        options->sleep(100);

    }
    return STORAGE->dataVectorVectorEntity.back()->dataVector.back();
}
void vkapi::wait(requestKeyType key) {
    requestEntity * entityLink = find(key);
    // printf("hey\n");
    while (entityLink == NULL)
        printf("FUCK\n");
    // while (entityLink->state < stateType::ready) {
    while (entityLink->state < stateType::responsed) {
        options->sleep(100);
        std::cerr << "request with key == " + key  + " is still under work. State is: " + std::to_string(entityLink->state) << std::endl;
    }
}