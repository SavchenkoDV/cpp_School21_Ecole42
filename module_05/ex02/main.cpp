#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	Bureaucrat Boss("Boss", 1);
	Bureaucrat Intern("Intern", 150);
	ShrubberyCreationForm Home("Home");
	RobotomyRequestForm Drill("Drill");
	PresidentialPardonForm TomasShelby("Tomas Shelby");
	std::cout << "*CONSTRUCTORS*\n" << std::endl;
	std::cout << Boss << std::endl;
	std::cout << Intern << std::endl;
	std::cout << Home << std::endl;
	std::cout << Drill << std::endl;
	std::cout << TomasShelby << std::endl;
	Intern.signForm(Home);
	Intern.signForm(Drill);
	Intern.signForm(TomasShelby);
	Boss.signForm(Home);
	Boss.signForm(Drill);
	Boss.signForm(TomasShelby);
	Intern.executeForm(Home);
	Intern.executeForm(Drill);
	Intern.executeForm(TomasShelby);
	Boss.executeForm(Home);
	Boss.executeForm(Drill);
	Boss.executeForm(TomasShelby);
	std::cout << "\n*DESTRUCTORS*" << std::endl;
	return 0;
}
