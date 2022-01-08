#include "RobotomyRequestForm.hpp"
#include "ctime"

RobotomyRequestForm::RobotomyRequestForm(): Form() { }

RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy) { }

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
						: Form(target, 72, 45) { }

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &overloads) {
	if (this == &overloads) { return *this; }
	Form::operator=(overloads);
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (!getSign()) {
		throw isNotSign();
	}
	if (executor.getGrade() > getGradeToExecute()) {
		throw GradeTooLowException();
	}
	std::cout << "Brrrr...brrrr...brrrr..." << std::endl;
	std::srand(std::time(NULL));
	if (std::rand() % 2) {
		std::cout << getName()
		          << " has been robotomized successfully 50% of the time!" << std::endl;
	} else {
		std::cout  << "It’s a failure!"  << std::endl;
	}
}