#pragma once
#include "https.h"
https::https() {
    curl_global_init(CURL_GLOBAL_DEFAULT);
    escapedToClear.clear();
    curl = curl_easy_init();
    if (!curl) {
        fprintf(stderr, "%s\n", "failed to init curl");
    };

};
https::~https() {
    curl_easy_cleanup(curl);
    curl_global_cleanup();
    clearEscaped();
    output.clear();
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
    output.clear();

    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, reinterpret_cast<void *>(&output));
    curl_easy_setopt(curl, CURLOPT_URL, method.c_str());
}


size_t https::WriteMemoryCallback(char *ptr, size_t size, size_t nmemb, void *data)
{
    size_t realsize = size * nmemb;
    std::string * str = reinterpret_cast<std::string *>(data);

    for (int i = 0; i < size * nmemb; i++) {
        str->push_back(ptr[i]);
    }

    str->push_back('\0');
    return realsize;
}

std::string https::getResponse() {
    return output;
}

std::string https::escape(std::string inputString) {
    if (escapedToClear.size() >= 20)
        clearEscaped();
    escapedToClear.push_back( curl_easy_escape(curl, inputString.c_str(), inputString.size()));
    if (escapedToClear.back() == NULL)
        return "\0";
    return std::string(escapedToClear.back());
}
std::string https::unEscape(std::string inputString) {
    if (escapedToClear.size() >=20 )
    {
        clearEscaped();
    }
    int * outl;
    escapedToClear.push_back(curl_easy_unescape(curl, inputString.c_str(), inputString.size(),  outl));
    return std::string(escapedToClear.back());
}

void https::clearEscaped() {
    // std::cerr << "clearEscaped running\nSizeof (vector) was:\t" << escapedToClear.size() << "\n";
    for (auto i : escapedToClear) {
        curl_free(i);
    };
    escapedToClear.clear();
    // std::cerr << "Now it\'s:\t" << escapedToClear.size() << "\n";
}