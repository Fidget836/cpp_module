#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
	private:
		int fixedPoint;
		static const int fractionalBits = 8;

	public:
		Fixed();
		Fixed(int const number);
		Fixed(float const number);
		Fixed(const Fixed &fixedArg);
		Fixed &operator=(const Fixed &fixedArg);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

	std::ostream &operator<<(std::ostream &o, Fixed const &i);
#endif
