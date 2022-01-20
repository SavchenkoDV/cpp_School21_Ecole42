#include "Array.hpp"

int main()
{
    Array<int> Num(5);
    for (int i = 0; i < Num.size(); ++i) {
        Num[i] = i + 10;
        std::cout << Num[i] << std::endl;
    }
    Array<std::string> String(5);
    String[0] = "000";
    String[1] = "111";
    String[2] = "222";
    String[3] = "333";
    String[4] = "444";
    for (int i = 0; i < String.size(); ++i) {
        std::cout << String[i] << std::endl;
    }
    Array<std::string> Copy(String);
    for (int i = 0; i < Copy.size(); ++i) {
        std::cout << Copy[i] << std::endl;
    }
    Array<std::string> StringNew(6);
    StringNew[0] = "666";
    StringNew[1] = "777";
    StringNew[2] = "888";
    StringNew[3] = "999";
    StringNew[4] = "000";
    StringNew[5] = "555";
    for (int i = 0; i < Copy.size(); ++i) {
        StringNew[i] = Copy[i];
        std::cout << StringNew[i] << std::endl;
    }
    std::cout << StringNew[5] << std::endl;
    std::cout << std::endl;

    try {
        for (int i = 0; i < StringNew.size(); ++i) {
            Copy[i] = StringNew[i] + " tail";
            std::cout << Copy[i] << std::endl;
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

}
