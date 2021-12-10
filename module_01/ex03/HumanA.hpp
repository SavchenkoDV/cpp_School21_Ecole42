#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {

public:
	HumanA();
	HumanA(std::string name, Weapon& type);
	~HumanA();
	void attack();

private:
	std::string name;
	Weapon &type;
};

#endif