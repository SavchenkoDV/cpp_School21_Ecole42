#include "ClapTrap.hpp"

int main() {
	ClapTrap SteelTrap;
	ClapTrap Trap("SteelTrap");
	ClapTrap NewTrap(Trap);
	SteelTrap = NewTrap;
	SteelTrap.attack("enemy");
	SteelTrap.takeDamage(0);
	SteelTrap.beRepaired(0);
	return 0;
}
