#include "Weapon.hpp"

Weapon::Weapon() {
    weapons_type = "none";
    std::cout << "Weapon constructor" << std::endl;
}

Weapon::~Weapon() {
    std::cout << "Weapon destructor" << std::endl;
}

void Weapon::setType(std::string type) {
    weapons_type = type;
}

std::string const &Weapon::getType() {
    return weapons_type;
}