#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap &copy);
	ClapTrap& operator=(const ClapTrap &overload);
	ClapTrap(std::string name);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;

};

#endif