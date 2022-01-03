#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	Cat a;
	Cat b;
	b = a;

	Animal *array[10];
	for (int x = 0; x < 10; x++) {
		if (x < 10)
			array[x] = new Cat();
		else
			array[x] = new Dog();
	}
	for (int x = 0; x < 10; x++)
		delete array[x];

	return 0;
}
