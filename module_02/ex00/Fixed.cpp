#include "Fixed.hpp"

Fixed::Fixed() {
	value = 0;
	std::cout << "Constructor to address: " << this << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor to address: " << this << std::endl;
}

Fixed::Fixed(const Fixed &copy_constructor) {
	this->value = copy_constructor.value;
	std::cout << "Copy of constructor on address: " << this << std::endl;
}

Fixed &Fixed::operator=(const Fixed &overload) {
	this->value = overload.value;
	std::cout << "Assignment operator Address: " << this << std::endl;
	return *this;
}


