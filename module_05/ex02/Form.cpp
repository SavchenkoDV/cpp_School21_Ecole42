#include "Form.hpp"

Form::Form() : _name("None"), _grade_to_execute(150), _sign(false), _grade_to_sign(150) {
	std::cout << "Default constructor Form - " << this << std::endl;
}

Form::~Form() { std::cout << "Destructor Form - " << this << std::endl; }

Form::Form(const Form &copy) :	_grade_to_execute(copy._grade_to_execute),
								_sign(copy._sign),
								_grade_to_sign(copy._grade_to_sign),
								_name(copy._name) {
	std::cout << "Copy constructor Form - " << this << std::endl;
}

Form::Form(const std::string _name, const int _grade_to_sign, const int _grade_to_execute) :
								_name(_name),
								_sign(false),
								_grade_to_sign(_grade_to_sign),
								_grade_to_execute(_grade_to_execute) {
	if (_grade_to_sign < 1 || _grade_to_execute < 1) { throw GradeTooHighException(); }
	if (_grade_to_sign > 150 || _grade_to_execute > 150) { throw GradeTooLowException(); }
	std::cout << "Constructor Form - " << this << std::endl;
}

Form &Form::operator=(const Form &overload) {
	if (this == &overload) { return *this; }
	_sign = overload._sign;
	return *this;
}

std::string Form::getName() const { return _name; }

bool Form::getSign() const { return _sign; }

int Form::getGradeToSign() const { return _grade_to_sign; }

int Form::getGradeToExecute() const { return _grade_to_execute; }

void Form::beSigned(Bureaucrat &object) {
	if (object.getGrade() <= _grade_to_sign) { _sign = true; }
	else {
		throw GradeTooLowException();
	}
}

std::ostream& operator<<(std::ostream& out, const Form& object) {
	out << "Form's name: " << object.getName() << " | " << "Sign: " << object.getSign() << " | "
		<< "Grade to sign: " << object.getGradeToSign() << " | "
		<< "Grade to execute: " << object.getGradeToExecute();
	return out;
}







