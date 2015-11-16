#pragma once
#include "vkapi.h"
vkapi::vkapi(https * httpsObjectReceived) {
    readTokenFromFile();
    this->httpsObject = httpsObjectReceived;
}
vkapi::~vkapi() {
    // delete httpsObject;
}
void vkapi::readTokenFromFile() {

    if (FILE *fp = fopen("./token", "r"))
    {
        char buf[1024];
        while (size_t len = fread(buf, 1, sizeof(buf), fp))
            token.insert(token.end(), buf, buf + len);
        fclose(fp);
    }
}
void vkapi::request(vk method, vk parameters) {
    httpsObject->request("https://api.vk.com/method/" + method  + parameters + "&access_token=" + token);
    lastresponse = httpsObject->getResponse();
}
void vkapi::request(vk method) {
    httpsObject->request("https://api.vk.com/method/" + method + "&access_token=" + token);
    lastresponse = httpsObject->getResponse();
}
//////////////////////////////////////////////////////////////////////////////
void vkapi::save() {
    save("example.json");
}
void vkapi::save(std::string filename) {
    FILE * fp;
    fp = fopen( filename.c_str(), "w");
    if ( !fp )
        return;
    fprintf(fp, lastresponse.c_str() );
    fclose( fp );
}
////////////////////////////////////////////////////////////////////////////////
#include "../scripts/api.cpp"

