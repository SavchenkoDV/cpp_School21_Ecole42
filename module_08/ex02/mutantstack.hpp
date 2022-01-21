#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>


template <class T, class Container=std::deque <T> > //Type: Тип данных элемента для сохранения в стеке. Container: Тип базового контейнера, используемый для реализации стека. Значение по умолчанию — класс deque <Type> .
class MutantStack: public std::stack<T, Container> {
public:
    typedef typename std::stack<T, Container>::container_type::iterator iterator;
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
};

#endif
