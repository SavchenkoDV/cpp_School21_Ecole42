#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Default constructor Animal - " << this << std::endl;
	type = "Animal";
}

Animal::~Animal() {
	std::cout << "Destructor Animal - " << this << std::endl;
}

Animal::Animal(const Animal &copy) {
	std::cout << "Copy constructor Animal - " << this << std::endl;
	type = copy.type;
}

Animal &Animal::operator=(const Animal &overload) {
	if (this == &overload)
		return *this;
	type = overload.type;
	return *this;
}

std::string Animal::getType() const {
	return type;
}
