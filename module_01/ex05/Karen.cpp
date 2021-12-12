#include "Karen.hpp"

Karen::Karen() {
	std::cout << "Karen constructor" << std::endl;
}

Karen::~Karen() {
	std::cout << "Karen destructor" << std::endl;
}

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
	//int index = 0;
//	std::string complains [] = {"DEBUG", "INFO", "WARNING", "ERROR" };
//	while (index < 4 && complains[index] != level) { index++; }
//	switch (index) {
//		case 0:
//			debug();
//			break;
//		case 1:
//			std::cout << "info" << std::endl;
//			break;
//		case 2:
//			std::cout << "warning" << std::endl;
//			break;
//		case 3:
//			std::cout << "error" << std::endl;
//			break;
//		default:
//			std::cout << "I'm not complaining!" << std::endl;
//	}
}