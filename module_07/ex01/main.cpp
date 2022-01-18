#include "iter.hpp"


template<typename T>
void    printX(const T& x) {
    std::cout << x << std::endl;
}

int main() {
    {
        int array[] = {1, 2, 3};
        size_t size_array = sizeof(array) / sizeof(int);
        ::iter(array, size_array, printX);
    }
    {
        float array[] = {1.1, 2.1, 3.1};
        size_t size_array = sizeof(array) / sizeof(float);
        ::iter(array, size_array, printX);
    }
    {
        std::string array[] = {"aaa", "bbb", "ccc"};
        size_t size_array = sizeof(array) / sizeof(array[0]);
        ::iter(array, size_array, printX);
    }
    return 0;
}