#ifndef FLAGTRAP_H
# define FLAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap :public ClapTrap {

public:
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &copy);
	FragTrap& operator=(const FragTrap &overload);
	FragTrap(std::string name);
	void highFivesGuys(void);
	void state() const;
};

#endif


