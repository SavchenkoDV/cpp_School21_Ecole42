#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Default constructor Cat - " << this << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::~Cat() {
	std::cout << "Destructor Cat - " << this << std::endl;
	delete brain;
}

Cat::Cat(const Cat &copy) {
	std::cout << "Copy constructor Cat - " << this << std::endl;
	type = copy.type;
	brain = new Brain();
	*brain = *copy.brain;
}

Cat &Cat::operator=(const Cat &overload) {
	if (this == &overload)
		return *this;
	delete brain;
	brain = new Brain();
	type = overload.type;
	*brain = *overload.brain;
	return *this;
}

void Cat::makeSound() const{
	std::cout << "Meow meow" << std::endl;
}


