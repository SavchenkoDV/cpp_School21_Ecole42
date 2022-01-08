#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

public:

	Intern();
	~Intern();
	Intern(Intern const & copy);
	Intern& operator=(const Intern& overload);
	Form* makeForm(std::string form, std::string forms_name);
	//class WorngFormException: public std::exception { };

};

#endif
