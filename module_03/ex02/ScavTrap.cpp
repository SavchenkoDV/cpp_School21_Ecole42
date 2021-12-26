#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Default constructor ScavTrap called with address: "
			  << this << std::endl;
	_name = "ScavTrap";
	_hit_points = 0;
	_energy_points = 0;
	_attack_damage = 0;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap with address: " << this << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) {
	std::cout << "Copy's constructor ScavTrap called with address: "
			  << this << std::endl;
	_name 			= copy._name;
	_hit_points 	= copy._hit_points;
	_energy_points	= copy._energy_points;
	_attack_damage	= copy._attack_damage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &overload) {
	std::cout << "An assignation operator overload ScavTrap called" << std::endl;
	if (this == &overload)
		return *this;
	_name 			= overload._name;
	_hit_points 	= overload._hit_points;
	_energy_points	= overload._energy_points;
	_attack_damage	= overload._attack_damage;
	return *this;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "Constructor ScavTrap with address: " << this << std::endl;
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

void ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << _name << " attacks " << target
			  << ", causing " << _attack_damage  << " points of damage!"
			  << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " have entered in Gate Keeper mode"
			  << std::endl;
}

void ScavTrap::state() const {
	std::cout << "Name: " << _name << std::endl;
	std::cout << "HitPoints: " << _hit_points << std::endl;
	std::cout << "Energy points: " << _energy_points << std::endl;
}




