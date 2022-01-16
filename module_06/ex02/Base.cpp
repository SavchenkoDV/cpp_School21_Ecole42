#include "Base.hpp"

Base::~Base() { }

Base* generate(void) {

	std::srand(time(NULL));
	size_t rand = std::rand() % 3;
	switch (rand) {
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return (NULL);
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Class A called!" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Class B called!" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Class C called!" << std::endl;
	else
		std::cout << "Something wrong!" << std::endl;
}

void identify(Base& p) {
	try {
		dynamic_cast<A&>(p);
		std::cout << "Class A called!" << std::endl;
	} catch (std::exception &e) { }

	try {
		dynamic_cast<B&>(p);
		std::cout << "Class B called!" << std::endl;
	} catch (std::exception &e) { }

	try {
		dynamic_cast<C&>(p);
		std::cout << "Class C called!" << std::endl;
	} catch (std::exception &e) { }
}
