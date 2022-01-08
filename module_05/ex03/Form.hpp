#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:
	Form();
	virtual ~Form();
	Form(const Form& copy);
	Form(const std::string _name, const int _grade_to_sign, const int _grade_to_execute);
	Form& operator=(const Form& overload);
	class GradeTooHighException : public std::exception { };
	class GradeTooLowException : public std::exception { };
	class isNotSign : public std::exception { };
	std::string getName() const;
	bool getSign() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(Bureaucrat& object);
	virtual void execute(Bureaucrat const & executor) const = 0;

private:
	const std::string _name;
	bool _sign;
	const int _grade_to_sign;
	const int _grade_to_execute;
};

std::ostream& operator<<(std::ostream& out, const Form& object);

#endif