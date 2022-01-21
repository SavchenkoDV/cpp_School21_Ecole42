#include "span.hpp"

Span::Span() : _size(0) { }

Span::~Span() { }

Span::Span(unsigned int size) : _size(size) { }

Span::Span(const Span &copy) {
    _size = copy._size;
    _mset = copy._mset;
}

Span& Span::operator=(const Span &overload) {
    if (this == &overload) { return *this; }
    _size = overload._size;
    _mset = overload._mset;
    return *this;
}

void Span::addNumber(unsigned int n) {
    if (_mset.size() < _size) { _mset.insert(n); }
    else { throw std::exception(); }
}

unsigned int Span::shortestSpan() {
    if (_mset.size() <= 1) { throw std::exception(); }
    std::multiset<int>::iterator it = std::next(_mset.begin());
    std::multiset<int>::iterator prev_it = std::prev(it);
    std::multiset<int>::reverse_iterator end = std::next(_mset.rbegin());
    int difference = *it - *prev_it;
    for (; *it < *end; ++it) {
        int tmp = *it - *prev_it;
        if (tmp < difference) { difference = tmp; }
    }
    return difference;
}

unsigned int Span::longestSpan() {
    if (_mset.size() <= 1)
        throw std::exception();
    std::multiset<int>::iterator first = _mset.begin();
    std::multiset<int>::reverse_iterator end = _mset.rbegin();
    return *end - *first;
}

