#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default constructor Brain - " << this << std::endl;
}

Brain::~Brain() {
	std::cout << "Destructor Brain - " << this << std::endl;
}

Brain::Brain(const Brain &copy) {
	std::cout << "Copy constructor Brain - " << this << std::endl;
	for (int i = 0; i < 100; ++i) { ideas[i] = copy.ideas[i]; }
}

Brain &Brain::operator=(const Brain &overload) {
	if (this == &overload)
		return *this;
	for (int i = 0; i < 100; ++i) { ideas[i] = overload.ideas[i]; }
	return *this;
}