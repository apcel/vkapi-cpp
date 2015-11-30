#pragma once
#include <iostream>
#include <pthread.h> // for threading
#include "options.h"
class parser
{
    optionsClass * options;
public:
    explicit parser(optionsClass *);
    ~parser();
    // parse(std::string)
private:
    void dumbParser();
    static void * _start(void *);
    void * Loop();
    pthread_t thread1;
};