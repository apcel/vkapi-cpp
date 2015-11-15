#pragma once
#include "https.h"
https::https() {
    curl_global_init(CURL_GLOBAL_DEFAULT);

    curl = curl_easy_init();
    if (!curl) {
        fprintf(stderr, "%s\n", "failed to init curl");
    };

};
https::~https() {
    curl_easy_cleanup(curl);
    curl_global_cleanup();
}
int https::request(std::string method) {
    this->method = method;
    setup();
    res = curl_easy_perform(curl);
    if (res != CURLE_OK)
        fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));
}

void https::setup() {
    output.buffer="\0";
    output.size=0;
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&output);
    curl_easy_setopt(curl, CURLOPT_URL, method.c_str());
}



size_t https::WriteMemoryCallback(char *ptr, size_t size, size_t nmemb, void *data)
{
    size_t realsize = size * nmemb;
    struct BufferStruct * mem = (struct BufferStruct *) data;
    mem->buffer = (char*)realloc(mem->buffer, mem->size + realsize + 1);
    if ( mem->buffer ) {
        memcpy( &( mem->buffer[ mem->size ] ), ptr, realsize );
        mem->size += realsize;
        mem->buffer[ mem->size ] = 0;
    }
    return realsize;
}

char * https::getResponse() {
    return output.buffer;
}
std::string https::escape(std::string inputString) {
    return std::string(curl_easy_escape(curl, inputString.c_str(), inputString.size()));
}