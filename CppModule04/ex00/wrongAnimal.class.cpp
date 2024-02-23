#include "wrongAnimal.class.hpp"

wrongAnimal::wrongAnimal(std::string typeArg) : type(typeArg)
{
	std::cout << "WRONG Overload animal constructor called." << std::endl;
}

wrongAnimal::wrongAnimal()
{
	std::cout << "WRONG Default constructor called." << std::endl;
}

wrongAnimal::~wrongAnimal()
{
	std::cout << "WRONG Default destructor called." << std::endl;
}

void	wrongAnimal::makeSound(void) const
{
	std::cout << "WRONG Animal make sound" << std::endl;
}

std::string wrongAnimal::getType() const
{
	return (this->type);
}
