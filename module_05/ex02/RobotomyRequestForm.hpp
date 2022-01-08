#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm: public Form {

public:

	///////------------------------------------CONSTRUCTORS------------------------------------///////

	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& cl_copy);
	RobotomyRequestForm(const std::string &target);

	///////------------------------------------OVERLOADS------------------------------------///////

	RobotomyRequestForm& operator=(const RobotomyRequestForm& overload);

	///////------------------------------------FUNCTIONS------------------------------------///////

	virtual void execute(Bureaucrat const & executor) const;
};

#endif

///////------------------------------------THE_END------------------------------------///////
