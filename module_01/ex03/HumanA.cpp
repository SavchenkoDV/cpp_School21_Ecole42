#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : type(type) {
	this->name = name;
	std::cout << "HumanA constructor" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA destructor" << std::endl;
}

void HumanA::attack() {
	std::cout <<  name + " attacks with his " +  type.getType() << std::endl;
}

