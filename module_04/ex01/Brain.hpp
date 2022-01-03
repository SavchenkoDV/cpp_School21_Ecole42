#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain {

public:
	Brain();
	~Brain();
	Brain(const Brain &copy);
	Brain& operator=(const Brain &overload);

private:
	std::string ideas[100];

};

#endif