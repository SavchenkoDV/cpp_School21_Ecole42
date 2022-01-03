#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Default constructor Dog - " << this << std::endl;
	type = "Dog";
}

Dog::~Dog() {
	std::cout << "Destructor Dog - " << this << std::endl;
}

Dog::Dog(const Dog &copy) {
	std::cout << "Copy constructor Dog - " << this << std::endl;
	type = copy.type;
}

Dog &Dog::operator=(const Dog &overload) {
	if (this == &overload)
		return *this;
	type = overload.type;
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Bow wow" << std::endl;
};