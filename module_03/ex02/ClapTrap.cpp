#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default constructor ClapTrap called with address: "
			  << this << std::endl;
	_name = "ClapTrap";
	_hit_points = 0;
	_energy_points = 0;
	_attack_damage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor ClapTrap with address: " << this << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "Copy's constructor ClapTrap called with address: "
			  << this << std::endl;
	_name 			= copy._name;
	_hit_points 	= copy._hit_points;
	_energy_points	= copy._energy_points;
	_attack_damage	= copy._attack_damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &overload) {
	std::cout << "An assignation operator overload ClapTrap called" << std::endl;
	if (this == &overload)
		return *this;
	_name 			= overload._name;
	_hit_points 	= overload._hit_points;
	_energy_points	= overload._energy_points;
	_attack_damage	= overload._attack_damage;
	return *this;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Constructor ClapTrap with address: " << this << std::endl;
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << _name << " attacks " << target
			  << ", causing " << _attack_damage  << " points of damage!"
			  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " takes damage " << amount << "."
			  << " It's got " << _hit_points << " hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " was repaired by " << amount
			  << " points." << " It's got " << _energy_points <<
			  " energy points!" << std::endl;
}



