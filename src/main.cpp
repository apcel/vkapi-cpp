#include <iostream>
#include "https.h"
#include "vkapi.h"
int main(int argc, char* argv[])
{
    https * httpsObject = new https;

    vkapi * vkapiObject = new vkapi(httpsObject);

    // std::string message = std::string(argv[1]);
    // std::cout << message << std::endl;
    for (int i = 0; i < 3; ++i){
        vkapiObject->messagesSend("", "",  "apcel", "", "", std::to_string(i), "",  "", "", "", "", "");
        // system("sleep 1");
    }
    vkapiObject->save();
    // std::string a; std::cin >> a;
    delete vkapiObject;
    delete httpsObject;
    return 0;
}
