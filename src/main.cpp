#include <iostream>
#include "https.h"
#include "vkapi.h"
int main(int argc, char* argv[])
{
    https * httpsObject = new https;

    vkapi * vkapiObject = new vkapi(httpsObject);

    // std::string message = std::string(argv[1]);
    // std::cout << message << std::endl;
    vkapiObject->messagesSend("", "",  "apcel", "", "", "message", "",  "", "", "", "", "");
    vkapiObject->save();
    return 0;
}
