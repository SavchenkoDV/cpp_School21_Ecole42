#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat {

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& overload);
	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	class GradeTooHighException : public std::exception { };
	class GradeTooLowException : public std::exception { };
	void signForm(Form& form);
	void executeForm(Form const& form);

private:
	const std::string _name;
	int _grade;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& object);

#endif