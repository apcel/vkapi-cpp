#pragma once
#include <iostream>
#include <curl/curl.h>
#include <cstring>
class https
{
public:
    https();
    ~https();
    int request(std::string);
    char * getResponse();
    std::string escape(std::string);
private:
    void setup();
    static size_t WriteMemoryCallback(char *, size_t, size_t, void *);
    struct BufferStruct
    {
        char * buffer;
        size_t size;
    };
    BufferStruct output;
    CURL *curl;
    CURLcode res;
    std::string method;
};