#pragma once
#include <cstring>
#include <vector>


#include <pthread.h> // for threading


#include "options.h"
#include "networking.h"


using requestKeyType = long;
using methodType = std::string;
using tokenType = std::string;
using parameterNameType = std::string;
using parameterNameValue = std::string;



class responseFieldType
{
public:
    std::string key;
    std::string value;
    //TODO: value as responseField
};

class responseEntityType
{
public:
    std::vector<responseFieldType *> responseVector;
    std::string rawResponse;
};

class requestParametersType
{
    struct requestParametersPair
    {
        std::string parameterName;
        std::string parameterValue;
    };
public:
    std::vector<requestParametersPair> parametersVector;

    std::string geturl() {
        std::string returnString;
        for (auto i : parametersVector)
            returnString += "&" + i.parameterName + "=" + i.parameterValue;

        return returnString;
    };
    void addParam(parameterNameType name, parameterNameValue value) {
        requestParametersPair tempPair;
        tempPair.parameterName = name;
        tempPair.parameterValue = value;
        parametersVector.push_back(tempPair);
    };

};
enum stateType
{
    nulled,
    under_construction,
    constructed,
    in_validation,
    validated,
    in_networking,
    responsed,
    in_parcing,
    ready,
    statedForDeletion,
    in_deletion
};


class requestEntity
{
public:
    // optionsClass * options;
    // requestEntity(optionsClass * optionsInput) {
    requestEntity() {
        // optionsInput->sleep(1000);
        // options = optionsInput;
        requestParameters = new requestParametersType;
        responseEntity = new responseEntityType;
    }
    ~requestEntity() {
        delete requestParameters;
        delete responseEntity;
    }
    requestKeyType requestKey;
    methodType method;
    requestParametersType * requestParameters;
    tokenType token;
    responseEntityType * responseEntity;
    bool valid;
    // = options->defaultValid;
    stateType state = nulled;
    std::string getUrl() {
        return  method + "?" + requestParameters->geturl() + "&access_token=" + token;
    };
};


class dataVectorType {
public:
    optionsClass * options;
    pthread_t workerThread;
    dataVectorType(optionsClass * optionsInput, requestEntity * first, int * requestedInput) {
        options = optionsInput;
        dataVector.clear();
        dataVector.push_back(first);
        requested = requestedInput;
    };

    ~dataVectorType() {
        pthread_cancel(workerThread);
        for (auto i : dataVector)
            delete i;
        dataVector.clear();
    };


    void addToQueue(requestEntity * adding) {
        dataVector.push_back(adding);
        (*requested)++;
    };
    int * requested;
    std::vector<requestEntity *> dataVector;
};
