#pragma once
#include <iostream>
#include <pthread.h> // for threading
#include "options.h"
class parser
{
    optionsClass * options;
public:
    parser(optionsClass *);
    ~parser();
    // parse(std::string)
private:
    static void * _start(void *);
    void * Loop();
    pthread_t thread1;
};