#pragma once
#include "vkapi.h"
vkapi::vkapi(https * httpsObjectReceived) {
    readTokenFromFile();
    this->httpsObject = httpsObjectReceived;
}
vkapi::~vkapi() {
    httpsObject->~https();
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
    httpsObject->request("https://api.vk.com/method/" + method + "?" + parameters + "&access_token=" + token);
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
//////////////////////////////////////////////////////////////////////////////
void vkapi::execute(vk code) {
    request("execute", "code=" + code);
}

void vkapi::groupsGetById(vk group_ids) {
    groupsGetById(group_ids, "");
}
void vkapi::groupsGetById(vk group_ids, vk fields) {
    request("groups.getById", "group_ids=" + group_ids + "&fields=" + fields);
}

void vkapi::groupsGetMembers(vk group_id, vk offset) {
    groupsGetMembers(group_id, "", offset, std::to_string(1000), "", "");
}
void vkapi::groupsGetMembers(vk group_id, vk sort, vk offset, vk count, vk fields, vk filter) {
    request("groups.getMembers", "group_id=" + group_id + "&sort=" + sort + "&offset=" + offset + "&count=" + count + "&fields=" + fields + "&filter=" + filter);
}

void vkapi::usersGet(vk user_ids) {
    usersGet(user_ids, "", "nom");
}
void vkapi::usersGet(vk user_ids, vk fields, vk name_case) {
    request("users.get", "user_ids=" + user_ids + "&fields=" + fields + "&name_case=" + name_case);
}

void vkapi::groupsGet(vk user_id, vk offset) {
    groupsGet(user_id, "1", "", "", offset, std::to_string(1000));
}
void vkapi::groupsGet(vk user_id, vk extended, vk filter, vk fields, vk offset, vk count) {
    request("groups.get", "user_id=" + user_id + "&extended=" + extended + "&filter=" + filter + "&fields=" + fields + "&offset=" + offset + "&count=" + count);
}

void vkapi::messagesSend(vk user_id, vk peer_id, vk domain, vk chat_id, vk user_ids, vk message, vk guid, vk lat, vk long_, vk attachment, vk forwarded_messages, vk sticker_id) {
    request("messages.send", "user_id=" + user_id + "&message=" + message);
}