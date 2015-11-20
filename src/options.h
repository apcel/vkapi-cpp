#pragma once
class optionsClass
{
public:
    std::string hostname = "https://api.vk.com/method/";
    int maxCalls = 3;
    bool multitoken = true;
    int parserThreads = 3;
    void sleep(int milliseconds) {
        std::string sleepCmd = "sleep ";
        toSleep = milliseconds;
        toSleep = toSleep / 1000;
        // printf("%f\n", toSleep);
        sleepCmd += std::to_string(toSleep);
        system(sleepCmd.c_str());
    };
    bool defaultValid = true;
private:
    float toSleep;
};