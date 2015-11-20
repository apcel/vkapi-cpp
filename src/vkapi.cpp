#pragma once
#include "vkapi.h"
vkapi::vkapi() {
    vkapi(new optionsClass());
};
vkapi::vkapi(optionsClass * newOptions) {
    options = newOptions;
    parsers.clear();
    spawnParsers();
    prepareNextEntity();
    STORAGE = new dataVectorVector(options);
}
vkapi::~vkapi() {
    curl_global_cleanup();
    clearEscaped();
    for (auto i : parsers) {
        delete i;
    }
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
    STORAGE->addToQueue(preparedRequest);
    tokenType tempToken = preparedRequest->token;
    prepareNextEntity();
    return createRequestKey(tempToken);
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

    size_t hash = hash_fn(token+ std::to_string(rand() % 1207));
    // printf("%u\n", hash);
    return hash;
};
