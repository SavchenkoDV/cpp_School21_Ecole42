#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>


template <typename T>
void iter(T* array, size_t size_array, void function(const T& x)) {
    for (size_t index = 0; index < size_array; ++index) { function(array[index]); }
}

#endif