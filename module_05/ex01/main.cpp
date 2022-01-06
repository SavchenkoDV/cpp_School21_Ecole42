#include "Bureaucrat.hpp"

int main() {

	std::cout << "*TEST BUREAUCRAT: DEFAULT CONSTRUCTOR, DESTRUCTOR*" << std::endl;
	const Bureaucrat *DefaultFirst = new Bureaucrat();
	delete DefaultFirst;
	std::cout << "\n*TEST FORM: DEFAULT CONSTRUCTOR, DESTRUCTOR*" << std::endl;
	const Form *DefaultFirstForm = new Form();
	delete DefaultFirstForm;

	std::cout << "\n*TEST BUREAUCRAT: CONSTRUCTOR, DESTRUCTOR, << OPERATOR*" << std::endl;
	Bureaucrat First("First", 1);
	Bureaucrat Second("Second", 150);
	std::cout << First << std::endl;
	std::cout << Second << std::endl;

	std::cout << "\n*TEST FORM: CONSTRUCTOR, DESTRUCTOR, << OPERATOR*" << std::endl;
	Form firstForm("firstForm", 1, 1);
	Form secondForm("secondForm", 150, 150);
	std::cout << firstForm << std::endl;
	std::cout << secondForm << std::endl;

	std::cout << "\n*TEST BUREAUCRAT: INCREMENT, DECREMENT*" << std::endl;
	std::cout << First << std::endl;
	First.decrementGrade();
	std::cout << First << std::endl;
	First.incrementGrade();
	std::cout << First << std::endl;

	std::cout << "\n*TEST BUREAUCRAT: COPY CONSTRUCTOR, = OPERATOR*" << std::endl;
	Bureaucrat Third(First);
	std::cout << "Third copy of first:      " << Third << std::endl;
	Third = Second;
	std::cout << "Third overload of Second:  " << Third << std::endl;

	std::cout << "\n*TEST BUREAUCRAT: SIGN FORM AND EXCEPTION*" << std::endl;
	std::cout << "\n*TEST FORM: COPY CONSTRUCTOR, = OPERATOR*" << std::endl;
	std::cout << First << std::endl;
	std::cout << firstForm << std::endl;
	First.signForm(firstForm);
	std::cout << Second << std::endl;
	std::cout << firstForm << std::endl;
	Second.signForm(firstForm);
	Form thirdForm(firstForm);
	std::cout << "thirdForm copy of firstForm:  " << thirdForm << std::endl;
	thirdForm = secondForm;
	std::cout << "thirdForm copy of secondForm: " << thirdForm << std::endl;


	std::cout << "\n*TEST BUREAUCRAT: NO EXCEPTION*" << std::endl;
	try
	{
		std::cout << First << std::endl;
		std::cout << Second << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n*TEST FORM: NO EXCEPTION*" << std::endl;
	try
	{
		std::cout << firstForm << std::endl;
		std::cout << secondForm << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n*TEST BUREAUCRAT: MAX EXCEPTION*" << std::endl;
	try {
		First.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << First << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n*TEST FORM: MAX EXCEPTION*" << std::endl;
	try {
		std::cout << "*TRY CREATE: Form fourForm(\"fourForm\", 1, 0);*" << std::endl;
		Form fourForm("fourForm", 1, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n*TEST BUREAUCRAT: MIN EXCEPTION*" << std::endl;
	try
	{
		Second.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << Second << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n*TEST FORM: MIN EXCEPTION*" << std::endl;
	try {
		std::cout << "*TRY CREATE: Form fiveForm(\"fiveForm\", 151, 150);*" << std::endl;
		Form fiveForm("fiveForm", 151, 1150);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n*DESTRUCTORS*" << std::endl;
	return 0;
}
