#pragma once
#include <iostream>
#include "https.h"
class vkapi
{
    typedef std::string vk;
public:
    vkapi(https *);
    ~vkapi();
    std::string lastresponse;
    void save();
    void save(std::string);
private:
    void request(vk, vk);
    void request(vk);
    void readTokenFromFile();
    https * httpsObject;
    std::string token;
public: //autogenereated
    #include "../scripts/api.h"
};