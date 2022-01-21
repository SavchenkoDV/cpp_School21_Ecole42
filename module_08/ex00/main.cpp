#include "easyfind.hpp"

int main() {
    {
        std::vector<int> myVector;
        for (int i = 0; i < 5; ++i) {
            myVector.push_back(i + 10);
            std::cout << myVector[i] << std::endl;
        }

        try {
            std::vector<int>::iterator it = easyfind(myVector, 12);
            if (it != myVector.end()) {
                std::cout << "found: " << *it << std::endl;
            }
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        return 0;
    }
}
