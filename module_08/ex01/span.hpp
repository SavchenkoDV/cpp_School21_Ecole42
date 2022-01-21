#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <set>

class Span {

public:

    Span();
    ~Span();
    Span(const Span& copy);
    Span(unsigned int size);
    Span& operator=(const Span& overload);
    void addNumber(unsigned int n);
    unsigned int shortestSpan();
    unsigned int longestSpan();
    std::multiset<int> _mset;

private:
    unsigned int _size;


};

#endif