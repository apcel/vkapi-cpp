#include <iostream>
#include "https.h"
#include "vkapi.h"
int main(int argc, char* argv[])
{
    https * httpsObject = new https;

    vkapi * vkapiObject = new vkapi(httpsObject);

    // std::string message = std::string(argv[1]);
    // std::cout << message << std::endl;
    std::cout << httpsObject->unEscape("http://0x43e4a1ee/1/01SPq4");
    for (int j = 0; j < 12; ++j) {
        std::string notifySend="sleep 2; notify-send ";
        for (int i = 0; i < 3; ++i) {
            vkapiObject->messagesSend("", "",  "apcel", "", "", std::to_string(i), "",  "", "", "", "", "");

            std::cout << vkapiObject->lastresponse << std::endl;
            notifySend += vkapiObject->lastresponse;
            // system("sleep 1");
        }
        system(notifySend.c_str());
    }
    vkapiObject->save();
    // std::string a; std::cin >> a;
    delete vkapiObject;
    delete httpsObject;
    return 0;
}
