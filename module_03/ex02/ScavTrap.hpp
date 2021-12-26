#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap :public ClapTrap {

	public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(const ScavTrap &copy);
	ScavTrap& operator=(const ScavTrap &overload);
	ScavTrap(std::string name);
	void attack(std::string const & target);
	void guardGate ();
	void state() const;
};

#endif