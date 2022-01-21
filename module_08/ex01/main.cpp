#include <iostream>
#include "span.hpp"

int main()
{

    try {
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        for (std::multiset<int>::iterator it = sp._mset.begin(); it !=  sp._mset.end(); ++it)
            std::cout << *it << std::endl;
        std::cout << "===========" << std::endl;
        std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e) { std::cout << e.what() << std::endl; }


}
