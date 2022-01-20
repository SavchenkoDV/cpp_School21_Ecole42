#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>


template <typename T>
class Array {

public:
    Array() : _size_array(0), _array(new T[0]) {
        std::cout << "Default constructor: " << this << std::endl;
    }

    ~Array() {
        std::cout <<  "Destructor: " << this << std::endl;
        if (_array) { delete [] _array; }
    }

    Array(unsigned int n) : _size_array(n), _array(new T[n]) {
        std::cout <<  "Constructor: " << this << std::endl;
    }

    Array(const Array& copy): _size_array(copy.size()) {
        std::cout << "Copy constructor: " << this << std::endl;
        _array = new T[_size_array];
        for (unsigned int i = 0; i < _size_array; ++i) { _array[i] = copy._array[i]; }
    }

    Array& operator=(const Array& overload) {
        if (this == &overload) { return *this; }
        if (_array) { delete [] _array; }
        _size_array = overload.size();
        _array = new T[_size_array];
        for (unsigned int i = 0; i < _size_array; ++i) { _array[i] = overload._array[i]; }
        return *this;
    }

    unsigned int size() const {
        return _size_array;
    }

    T& operator[](unsigned int i) {
        if (i < 0 || i >= _size_array) {
            throw std::exception();
        }
        return (_array[i]);
    }

    const T& operator[](unsigned int i) const {
        if (i < 0 || i >= _size_array) {
            throw std::exception();
        }
        return (_array[i]);
    }


private:
    T* _array;
    unsigned int _size_array;

};

#endif