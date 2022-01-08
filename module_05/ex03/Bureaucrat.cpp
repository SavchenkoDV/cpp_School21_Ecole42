#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Default constructor Bureaucrat - " << this << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor Bureaucrat - " << this << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "Constructor Bureaucrat - " << this << std::endl;
	if (grade < 1) { throw GradeTooHighException(); }
	if (grade > 150) { throw GradeTooLowException(); }
};

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade) {
	std::cout << "Copy constructor Bureaucrat  - " << this << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& overload) {
	if (this == &overload) { return *this; }
	_grade = overload._grade;
	return *this;
}

std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const{
	return _grade;
}

void Bureaucrat::incrementGrade() {
	if (--_grade < 1) { throw GradeTooHighException(); }
}

void Bureaucrat::decrementGrade() {
	if (++_grade > 150) { throw GradeTooLowException();  }
}

void Bureaucrat::signForm(Form& form) {
	try {
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " cannot sign " << form.getName() << " because has low lvl" << std::endl;
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form) {
	try {
		form.execute(*this);
		std::cout << _name << " execute " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " cannot execute " << form.getName() << " because has low lvl" << std::endl;
		std::cout << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &object) {
	out << "Name: " << object.getName() << " | " << "Grade: " << object.getGrade();
	return out;
}
