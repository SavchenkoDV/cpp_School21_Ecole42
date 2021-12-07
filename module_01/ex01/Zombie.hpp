#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {

public:
    Zombie();
    Zombie(std::string name);
    void nameSet( std::string );
    void announce( void );
    ~Zombie();

private:
    std::string zombies_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
