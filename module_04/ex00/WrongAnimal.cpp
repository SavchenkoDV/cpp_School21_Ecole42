#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Default constructor WrongAnimal - " << this << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor WrongAnimal - " << this << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	std::cout << "Copy constructor WrongAnimal - " << this << std::endl;
	type = copy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &overload) {
	if (this == &overload)
		return *this;
	type = overload.type;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "I speak any WrongAnimal's language" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
};
