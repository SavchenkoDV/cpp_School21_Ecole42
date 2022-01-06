#include "Bureaucrat.hpp"

int main() {

	std::cout << "*TEST: DEFAULT CONSTRUCTOR, DESTRUCTOR*" << std::endl;
	const Bureaucrat *DefaultFirst = new Bureaucrat();
	delete DefaultFirst;

	std::cout << "\n*TEST: CONSTRUCTOR, DESTRUCTOR, << OPERATOR*" << std::endl;
	Bureaucrat First("First", 1);
	Bureaucrat Second("Second", 150);
	std::cout << First << std::endl;
	std::cout << Second << std::endl;

	std::cout << "\n*TEST: INCREMENT, DECREMENT*" << std::endl;
	std::cout << First << std::endl;
	First.decrementGrade();
	std::cout << First << std::endl;
	First.incrementGrade();
	std::cout << First << std::endl;

	std::cout << "\n*TEST: COPY CONSTRUCTOR, = OPERATOR*" << std::endl;
	Bureaucrat Third(First);
	std::cout << "Third copy of first:      " << Third << std::endl;
	Third = Second;
	std::cout << "Third overload of Second:  " << Third << std::endl;

	std::cout << "\n*NO EXCEPTION*" << std::endl;
	try
	{
		std::cout << First << std::endl;
		std::cout << Second << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n*MAX EXCEPTION*" << std::endl;
	try {
		First.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << First << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n*MIN EXCEPTION*" << std::endl;
	try
	{
		Second.decrementGrade();

	}
	catch (std::exception &e)
	{
		std::cout << Second << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n*DESTRUCTORS*" << std::endl;
	return 0;
}
