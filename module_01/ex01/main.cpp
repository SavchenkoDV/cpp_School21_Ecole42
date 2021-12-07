#include "Zombie.hpp"

int main() {
    Zombie* zombies = zombieHorde(3, "Shaun");
    delete [] zombies;
    return 0;
}
