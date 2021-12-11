#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &type) : type(type) {
	this->name = name;
}

HumanA::~HumanA() { }

void HumanA::attack() {
	std::cout <<  name + " attacks with his " +  type.getType() << std::endl;
}

