#include "wrongCat.class.hpp"

wrongCat::wrongCat() : wrongAnimal("wrongCat")
{
	std::cout << "WRONG Cat constructor called." << std::endl;
}

wrongCat::~wrongCat()
{
	std::cout << "WRONG Cat destructor called." << std::endl;
}

void	wrongCat::makeSound() const
{
	std::cout << type << " WRONG Miaou Miaou" << std::endl;
}
