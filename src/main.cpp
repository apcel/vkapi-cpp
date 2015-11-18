#include <iostream>

int main(int argc, char* argv[])
{


    std::string adsf;
    for (int i = 1; i < argc; ++i) {
        adsf += argv[i];
        adsf += " ";
    }
    if (!adsf.empty())
        adsf.pop_back();
    std::cout << adsf << std::endl;

    return 0;
}
