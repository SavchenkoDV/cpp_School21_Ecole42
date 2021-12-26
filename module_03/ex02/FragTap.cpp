#include "FragTap.hpp"

FragTrap::FragTrap() {
	std::cout << "Default constructor FragTrap called with address: "
			  << this << std::endl;
	_name = "FragTrap";
	_hit_points = 0;
	_energy_points = 0;
	_attack_damage = 0;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor FragTrap with address: " << this << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) {
	std::cout << "Copy's constructor FragTrap called with address: "
			  << this << std::endl;
	_name 			= copy._name;
	_hit_points 	= copy._hit_points;
	_energy_points	= copy._energy_points;
	_attack_damage	= copy._attack_damage;
}

FragTrap &FragTrap::operator=(const FragTrap &overload) {
	std::cout << "An assignation operator overload FragTrap called" << std::endl;
	if (this == &overload)
		return *this;
	_name 			= overload._name;
	_hit_points 	= overload._hit_points;
	_energy_points	= overload._energy_points;
	_attack_damage	= overload._attack_damage;
	return *this;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "Constructor FragTrap with address: " << this << std::endl;
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Give me high-fives!" << std::endl;
}

void FragTrap::state() const {
	std::cout << "Name: " << _name << std::endl;
	std::cout << "HitPoints: " << _hit_points << std::endl;
	std::cout << "Energy points: " << _energy_points << std::endl;
	std::cout << "Attack damage: " << _attack_damage << std::endl;
}

