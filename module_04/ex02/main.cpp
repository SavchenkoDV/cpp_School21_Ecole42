#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

	Cat cat;
	Dog dog;

	std::cout << cat.getType() << std::endl;
	std::cout << dog.getType() << std::endl;

	cat.makeSound();
	dog.makeSound();

	return 0;
}
