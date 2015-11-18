#include <iostream>
#include "https.h"
#include "vkapi.h"
int main(int argc, char* argv[])
{
    https * httpsObject = new https;

    vkapi * vkapiObject = new vkapi(httpsObject);
// https://vk.com/id152798794
    // vkapiObject->usersGet("152798794", "blacklisted", "");
    // std::string message = std::string(argv[1]);
    // std::cout << message << std::endl;
    // for (int j = 0; j < 12; ++j) {
    // std::string notifySend="sleep 2; notify-send ";
    // for (int i = 0; i < 3; ++i) {
    std::string adsf;
    for (int i = 1; i < argc; ++i) {
        adsf += argv[i];
        adsf += " ";
    }
    if (!adsf.empty())
        adsf.pop_back();
    // std::cout << adsf << std::endl;
    // notifySend += vkapiObject->lastresponse;
    // system("sleep 1");
    // }
    // system(notifySend.c_str());
    // }
    // vkapiObject->save();
    // std::string a; std::cin >> a;
    vkapiObject->messagesSend("", "",  "apcel", "", "", adsf, "",  "", "", "", "", "");
    // vkapiObject->statusSet(adsf, "");
    std::cout << vkapiObject->lastresponse << std::endl;
    delete vkapiObject;
    delete httpsObject;
    return 0;
}
