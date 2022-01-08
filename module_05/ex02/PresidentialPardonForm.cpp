#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form() { }

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy) { }

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
						: Form(target, 25, 5) { }

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &overloads) {
	if (this == &overloads) { return *this; }
	Form::operator=(overloads);
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (!getSign()) {
		throw isNotSign();
	}
	if (executor.getGrade() > getGradeToExecute()) {
		throw GradeTooLowException();
	}
	std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
