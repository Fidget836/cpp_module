#include "Dog.class.hpp"

Dog::Dog() : Animal::Animal("Dog")
{
	std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << type << " Wouf Wouf" << std::endl;
}
