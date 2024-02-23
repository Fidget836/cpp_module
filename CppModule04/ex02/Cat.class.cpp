#include "Cat.class.hpp"
#include "Brain.class.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called." << std::endl;
	brainCat = new Brain;
}

Cat::~Cat()
{
	delete brainCat;
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << type << " Miaou Miaou" << std::endl;
}
