#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main() {

	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Home");
	std::cout << *rrf << std::endl;
	delete rrf;
	rrf = someRandomIntern.makeForm("None", "None");
	return 0;
}
