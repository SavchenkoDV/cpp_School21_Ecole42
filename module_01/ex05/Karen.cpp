#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void	Karen::debug ( void ) {
	std::cout << "debug" << std::endl;
}

void	Karen::info ( void ) {
	std::cout << "info" << std::endl;
}

void	Karen::warning ( void ) {
	std::cout << "warning" << std::endl;
}

void	Karen::error ( void ) {
	std::cout << "error" << std::endl;
}

void	Karen::complain(std::string level) {
	int index = 0;
	void (Karen:: *fncPtr[4])(void) = {&Karen::debug, &Karen::info,
									   &Karen::warning, &Karen::error};
	std::string complains [] = {"DEBUG", "INFO", "WARNING", "ERROR" };
	while (index < 4 && complains[index] != level) { index++; }
	switch (index) {
		case 0:
			(this->*fncPtr[0])();
			break;
		case 1:
			(this->*fncPtr[1])();
			break;
		case 2:
			(this->*fncPtr[2])();
			break;
		case 3:
			(this->*fncPtr[3])();
			break;
		default:
			std::cout << "I'm not complaining!" << std::endl;
	}
}