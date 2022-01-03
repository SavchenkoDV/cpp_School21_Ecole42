#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &copy);
	WrongCat& operator=(const WrongCat &overload);
	void makeSound() const;

};

#endif