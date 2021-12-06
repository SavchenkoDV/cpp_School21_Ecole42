#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) {
    zombies_name = name;
    std::cout << "Zombie " + zombies_name + " rose!" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " + zombies_name + " fell!" << std::endl;
}

void Zombie::announce() {
    std::cout << zombies_name + " BraiiiiiiinnnzzzZ..." << std::endl;
}
