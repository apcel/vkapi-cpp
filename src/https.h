#pragma once
#include <iostream>
#include <curl/curl.h>
#include <cstring>
#include <vector>
class https
{
public:
    https();
    ~https();
    int request(std::string);
    std::string getResponse();
    std::string escape(std::string);
    std::string unEscape(std::string);
private:
    void setup();
    static size_t WriteMemoryCallback(char *, size_t, size_t, void *);
    void clearEscaped();

    std::string output;
    CURL *curl;
    CURLcode res;
    std::string method;
    std::vector<char *> escapedToClear;
};