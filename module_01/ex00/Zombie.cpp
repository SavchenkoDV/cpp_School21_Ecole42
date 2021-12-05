#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << name_of_zombie + " rose!" << std::endl;
};

Zombie::~Zombie() {
	std::cout << name_of_zombie + " fell!" << std::endl;
}

void Zombie::announce( void ) const {
	std::cout << name_of_zombie + " BraiiiiiiinnnzzzZ..." << std::endl;
}


