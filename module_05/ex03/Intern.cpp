#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Default constructor Intern - " << this << std::endl;
}

Intern::~Intern() {
	std::cout << "Destructor Intern - " << this << std::endl;
}

Intern::Intern(const Intern &copy) {
	std::cout << "Copy constructor Intern - " << this << std::endl;
}

Intern& Intern::operator=(const Intern &overload) { return *this; }

Form *Intern::makeForm(std::string form, std::string forms_name) {
	std::string forms[3] = {"ShrubberyCreationForm",
							"RobotomyRequestForm",
							"PresidentialPardonForm"};
	for (int index = 0; index  < 3; ++index )
	{
		if (forms[index] == form) {
			switch (index) {
				case 0:
					return(new ShrubberyCreationForm(forms_name));
				case 1:
					return(new RobotomyRequestForm(forms_name));
				case 2:
					return(new PresidentialPardonForm(forms_name));
			}
		}
	}
	std::cout << "Unknown form" << std::endl;
	return NULL;
}



//Form * _presidentialPardonForm(std::string const & target) { return (new PresidentialPardonForm(target)); }
//
//Form * _robotomyRequestForm(std::string const & target) { return (new RobotomyRequestForm(target)); }
//
//Form * _shrubberyCreationForm(std::string const & target) { return (new ShrubberyCreationForm(target)); }
//
//Form * Intern::makeForm(const std::string &form, const std::string &target) {
//	Form * (* functions_arr[3])(std::string const & ) = {_presidentialPardonForm, _robotomyRequestForm, _shrubberyCreationForm};
//	std::string string_arr[3] = {"presidentialPardonForm", "robotomyRequestForm", "shrubberyCreationForm"};
//
//	for (int i = 0; i < 3; i++) {
//		if (string_arr[i] == form) {
//			std::cout << "Intern creates " << form << std::endl;
//			return ((*functions_arr[i])(target));
//		}
//	}
//
////		throw Intern::WorngFormException();
//
//	std::cout << "Yooooo! Wrong form!" << std::endl;
//
//	return NULL;
//}

//const char * Intern::WorngFormException::what() const throw() { return "Yooooo! Wrong form!"; }

