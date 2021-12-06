#include "Zombie.hpp"

int main() {
    Zombie zombieFirst = Zombie("First");
    Zombie* zombieSecond = newZombie("Second");

    zombieFirst.announce();
    zombieSecond->announce();
    randomChump("Third");

    delete zombieSecond;

    return 0;
}
