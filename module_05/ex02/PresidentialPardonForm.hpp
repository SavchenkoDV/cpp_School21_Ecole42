#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form {

public:

	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& overloads);
	virtual void execute(Bureaucrat const & executor) const;

};

#endif
