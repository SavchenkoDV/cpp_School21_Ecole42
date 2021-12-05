#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {

public:
	Zombie();
	~Zombie();
	void announce( void ) const;

private:
	std::string name_of_zombie;

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif