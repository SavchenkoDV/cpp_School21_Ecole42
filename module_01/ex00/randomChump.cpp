#include "Zombie.hpp"

void randomChump( std::string name ) {
    Zombie newZombie = Zombie(name);
    newZombie.announce();
}
