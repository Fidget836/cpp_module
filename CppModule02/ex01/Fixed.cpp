#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixedPoint = 0;
}

Fixed::Fixed(const Fixed &fixedArg)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedArg;
}

Fixed::Fixed(int const number)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(number * (1 << fractionalBits));
}

Fixed::Fixed(float const number)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(std::roundf(number * (1 << fractionalBits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
	return (fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
}

float   Fixed::toFloat( void ) const
{
    return (static_cast<float>(getRawBits()) / (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
	return (getRawBits() >> fractionalBits);
}
