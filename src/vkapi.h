#pragma once
#include <curl/curl.h>
#include <vector>
#include <iostream>
#include <functional>
#include <cstdlib>


#include <pthread.h> // for threading

#include "mainDataClass.h"
#include "networking.h"
#include "types.h"
#include "options.h"
#include "parser.h"
// optionsClass options;
class vkapi
{
public:
    explicit vkapi(optionsClass *);
    ~vkapi();

    std::string escape(std::string);
    std::string unEscape(std::string);



    /**REQUEST BULIDER**/
    void setMethod(methodType);
    void setToken(tokenType);
    void addParameter(parameterNameType, parameterNameValue);
    requestKeyType request();
    void wait(requestKeyType);
private:
    requestEntity * find(requestKeyType);
    void killParsers();
    requestKeyType createRequestKey(tokenType);

    dataVectorVector * STORAGE;

    void validate();
    void prepareNextEntity();
    requestEntity * preparedRequest;

    void clearEscaped();
    std::vector<char *> escapedToClear;
    CURL *curl;

    std::vector<parser *> parsers;

    void spawnParsers();

    optionsClass * options;

};