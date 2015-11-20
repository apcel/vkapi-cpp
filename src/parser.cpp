#pragma once
#include "parser.h"
parser::parser(optionsClass * newOptions) {
    options = newOptions;



    if (int iret1 = pthread_create(&thread1, NULL, _start, reinterpret_cast<void *>(this))) /*Threading magic*/
    {
        fprintf(stderr, "Error - pthread_create() return code: %d\n", iret1);
        exit(EXIT_FAILURE);
    };

};

parser::~parser() {

};





void * parser::_start(void * that) {
    // fprintf(stderr, "%s\n", "starting parser in another thread");
    return (reinterpret_cast<parser *>(that))->Loop();
};




void * parser::Loop() {
    while(false) {
        // options->sleep(1000);
    }
};