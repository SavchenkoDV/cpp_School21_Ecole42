#include "Fixed.hpp"

int main( void ) {
Fixed a(0.5f);
Fixed b(4);
Fixed c = a * b;

std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << c << std::endl;






//	Fixed a;
//	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//	std::cout << a << std::endl;
//	std::cout << ++a << std::endl;
//	std::cout << a << std::endl;
//	std::cout << a++ << std::endl;
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}