#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
class Fixed {

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy_constructor);
	Fixed &operator=(Fixed const &overload);
	int getRawBits( void ) const;
	void setRawBits( int const raw );


private:
	int value;
	static int const bits = 8;

};

#endif