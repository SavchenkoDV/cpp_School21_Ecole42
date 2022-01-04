#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Default constructor Dog - " << this << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Destructor Dog - " << this << std::endl;
	delete brain;
}

Dog::Dog(const Dog &copy) {
	std::cout << "Copy constructor Dog - " << this << std::endl;
	type = copy.type;
	brain = new Brain();
	*brain = *copy.brain;
}

Dog &Dog::operator=(const Dog &overload) {
	if (this == &overload)
		return *this;
	delete brain;
	brain = new Brain();
	type = overload.type;
	*brain = *overload.brain;
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Bow wow" << std::endl;
};