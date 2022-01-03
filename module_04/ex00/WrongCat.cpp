#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "Default constructor WrongCat - " << this << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "Destructor WrongCat - " << this << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) {
	std::cout << "Copy constructor WrongCat - " << this << std::endl;
	type = copy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &overload) {
	if (this == &overload)
		return *this;
	type = overload.type;
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "Meow meow" << std::endl;
};
