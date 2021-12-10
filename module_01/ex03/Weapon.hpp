#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {

public:
    Weapon();
    void setType( std::string );
    std::string const &getType();
    ~Weapon();

private:
    std::string weapons_type;
};

#endif