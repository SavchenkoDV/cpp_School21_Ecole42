#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {

public:
    Weapon();
	~Weapon();
	explicit Weapon(const std::string& type);
	void setType(const std::string& );
    std::string const &getType();

private:
    std::string weapons_type;
};

#endif