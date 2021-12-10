#include "Weapon.hpp"

Weapon::Weapon() {
    weapons_type = "none";
    std::cout << "Weapon constructor" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon destructor" << std::endl;
}

Weapon::Weapon(const std::string& type) {
	weapons_type = type;
	std::cout << "Weapon constructor with parameter" << std::endl;
}

void Weapon::setType(const std::string& type) {
    weapons_type = type;
}

const std::string& Weapon::getType() { return weapons_type; }