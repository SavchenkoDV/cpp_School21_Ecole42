#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {

public:
    Zombie();
    Zombie(std::string name);
    void announce( void );
    ~Zombie();
private:
    std::string zombies_name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
