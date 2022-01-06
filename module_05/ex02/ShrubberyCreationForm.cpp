#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form() { }

ShrubberyCreationForm::~ShrubberyCreationForm() { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy) { }

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
									: Form(target, 137, 145) { }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &overloads) {
	if (this == &overloads) { return *this; }
	Form::operator=(overloads);
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
//	if (executor.getGrade() > this->getGradeToExecute()) { throw GradeTooLowException(); }
//	if ()
//	{
//		throw FormIsNotSigned();
//	}
	std::ofstream fd(getName() + "_shrubbery");
	fd	<< "__*_________*_________*_" << std::endl
		<< "______*____*o*____*_____" << std::endl
		<< "_*________*o*o*_______*_" << std::endl
		<< "_____*___*o*o*o*___*____" << std::endl
		<< "___*____*o*o*o*o*_____*_" << std::endl
		<< "_______*o*o*o*o*o*______" << std::endl
		<< "__________|...|_________" << std::endl;

	fd.close();
}



