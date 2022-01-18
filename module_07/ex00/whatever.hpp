#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T>
void swap(T& first, T& second) {
    T temporary;
    temporary = first;
    first = second;
    second = temporary;
}

template <typename  T>
const T& min(const T& first, const T& second) {
    return first < second ? first : second;
}

template <typename  T>
const T& max(const T& first, const T& second) {
    return first > second ? first : second;
}

#endif