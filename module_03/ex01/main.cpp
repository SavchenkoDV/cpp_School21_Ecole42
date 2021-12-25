#include "ScavTrap.hpp"

int main() {
	ScavTrap Trap("BloodTrap");
	Trap.attack("enemy");
	Trap.state();
	Trap.guardGate();
	return 0;
}
