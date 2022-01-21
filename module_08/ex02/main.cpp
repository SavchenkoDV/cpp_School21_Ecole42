#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "MSTACK CONSIST:" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
        std::cout << *it << std::endl;
    std::cout << "MSTACK TOP: " << mstack.top() << std::endl;
    std::cout << "STACK POP" << std::endl;
    mstack.pop();
    std::cout << "MSTACK CONSIST:" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
        std::cout << *it << std::endl;
    std::cout << "MSTACK SIZE: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    std::cout << "MSTACK NEXT: " << *it << std::endl;
    --it;
    std::cout << "MSTACK PREV: " << *it << std::endl;
    std::cout << "MSTACK CONSIST:" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << mstack.size() << std::endl;
    std::stack<int> s(mstack);
    std::cout << "SIZE MSTACK: " << mstack.size() << std::endl;
    std::cout << "SIZE S: " << s.size() << std::endl;
    return 0;
}
