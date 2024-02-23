#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int fixedPoint;
		static const int bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &fixedArg);
		Fixed &operator=(const Fixed &fixedArg);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
