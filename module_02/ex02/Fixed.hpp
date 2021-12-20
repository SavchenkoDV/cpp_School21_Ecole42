#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {

public:
	Fixed();
	Fixed( const int number );
	Fixed( const float number );
	~Fixed();

	Fixed( const Fixed &copy_constructor );

	Fixed &operator=( Fixed const &overload );
	bool  operator<( Fixed const &overload ) const;
	bool  operator>( Fixed const &overload ) const;
	bool  operator<=( Fixed const &overload ) const;
	bool  operator>=( Fixed const &overload ) const;
	bool  operator==( Fixed const &overload ) const;
	bool  operator!=( Fixed const &overload ) const;
	Fixed operator+( Fixed const &overload ) const;
	Fixed operator-( Fixed const &overload ) const;
	Fixed operator*( Fixed const &overload ) const;

	int toInt( void ) const;
	float toFloat( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );


private:
	int value;
	static int const bits = 8;

};

std::ostream& operator<<(std::ostream &out, const Fixed& fixed);

#endif