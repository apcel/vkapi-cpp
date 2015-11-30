#pragma once
class optionsClass
{
public:
    optionsClass() {
        networking = new net();
        maxCalls = 3;multitoken = true;parserThreads = 3;defaultValid = true;

    };
    ~optionsClass() {
        delete networking;
    };
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
    class net
    {
    public:
        net(): hostname("https://api.vk.com/method/"), needed(true) {};
        std::string hostname = "https://api.vk.com/method/";
        bool needed = true;

    } * networking;
private:
    float toSleep;
};