#include "Fixed.hpp"



Fixed::Fixed() {
	value = 0;
	std::cout << "Default constructor to address: " << this << " called" <<  std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor to address: " << this << " called" << std::endl;
}

Fixed::Fixed(const Fixed &copy_constructor) {
	this->value = copy_constructor.value;
	std::cout << "Copy of constructor on address: " << this << " called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &overload) {
	this->value = overload.value;
	std::cout << "Assignment operator called" << std::endl;
	return *this;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "getRawBits member function called" << std::endl;
	this->value = raw;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}


