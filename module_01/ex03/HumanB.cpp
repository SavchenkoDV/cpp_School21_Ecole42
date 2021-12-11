#include "HumanB.hpp"

HumanB::HumanB() { this->name = "none"; }

HumanB::~HumanB() { }

HumanB::HumanB(std::string name) { this->name = name; }

void HumanB::setWeapon(Weapon &type) { this->type = &type; }

void HumanB::attack() {
std::cout << name + " attacks with his " + type->getType() << std::endl;
}


