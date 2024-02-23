#include "Animal.class.hpp"

Animal::Animal(std::string typeArg) : type(typeArg)
{
	std::cout << "Overload animal constructor called." << std::endl;
}

Animal::Animal()
{
	std::cout << "Default constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default destructor called." << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal make sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
