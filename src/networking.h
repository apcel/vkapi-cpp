#pragma once
#include <iostream>
#include <curl/curl.h>
#include <cstring>
#include <vector>
#include <time.h>

// #include <ctime>
#include "types.h"

#include <pthread.h> // for threading


class networking
{
public:
    networking(int * requestCounterLocation,
               class dataVectorType * ownVectorInput, class optionsClass * optionsInput, pthread_t * workerThread);
    ~networking();
    static void * _start(void *);
    void * Loop();
private:
    class dataVectorType * ownVector;
    class optionsClass * options;
    int * counterWaitingRequests;

    int request(class requestEntity *);

    // time_t lastThirdyCall = 0;
    int callsAtThisSecond;
    // std::vector<class requestEntity *> requestEntityVector;
    void waitToNextSecond();
    requestEntity * tempRequestEntity;
    requestEntity * searchNextRequest();

    void setup();
    static size_t WriteMemoryCallback(char *, size_t, size_t, void *);
    // timeval lastThirdyCall;
    // timeval currentTime;
    struct timespec spec;
    long ms;
    // itimerval timer;

    std::string output;
    CURL *curl;
    CURLcode res;
    std::string method;
    pthread_t thread1;
};