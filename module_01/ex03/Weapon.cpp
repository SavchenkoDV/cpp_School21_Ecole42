#include "Weapon.hpp"

Weapon::Weapon() { weapons_type = "none"; }

Weapon::~Weapon() { }

Weapon::Weapon(std::string type) { weapons_type = type; }

void Weapon::setType(const std::string& type) { weapons_type = type; }

const std::string& Weapon::getType() { return weapons_type; }