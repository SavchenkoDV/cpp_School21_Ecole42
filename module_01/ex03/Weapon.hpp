#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {

public:
    Weapon();
	~Weapon();
	Weapon(std::string type);
	void setType(const std::string& type);
    std::string const &getType();

private:
    std::string weapons_type;
};

#endif