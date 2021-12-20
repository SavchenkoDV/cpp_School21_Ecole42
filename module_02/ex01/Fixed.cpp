#include "Fixed.hpp"

Fixed::Fixed() {
	value = 0;
	std::cout << "Default constructor to address: " << this << " called" <<  std::endl;
}

Fixed::Fixed(const int number) {
	value = number << bits;
	std::cout << "Int constructor to address: " << this << " called" << std::endl;
}

Fixed::Fixed(const float number) {
	value = roundf(number * (1 << bits));
	std::cout << "Float constructor to address: " << this << " called" << std::endl;
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

std::ostream& operator<<(std::ostream &out, const Fixed& fixed) {
	out << fixed.toFloat();
	return out;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "getRawBits member function called" << std::endl;
	this->value = raw;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

float Fixed::toFloat(void) const {
	float number;
	number = static_cast<float>(value) / (1 << bits);
	return number;
}

int Fixed::toInt(void) const {
	int number;
	number = value / (1 << bits);
	return number;
}


