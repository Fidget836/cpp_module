#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixedPoint = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixedArg)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedArg;
}

Fixed &Fixed::operator=(const Fixed &fixedArg)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixedArg)
	{
		fixedPoint = fixedArg.getRawBits();
	}
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
}
