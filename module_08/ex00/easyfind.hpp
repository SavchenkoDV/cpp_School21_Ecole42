#ifndef EASYFIND
# define EASYFIND

# include <iostream>
# include <string>
# include <vector>

template <typename T>
typename T::iterator easyfind(T& vector, int value) {
    for (typename T::iterator it = vector.begin(); it != vector.end(); ++it)
        if (*it == value) { return it; }
    throw std::exception();
}

#endif