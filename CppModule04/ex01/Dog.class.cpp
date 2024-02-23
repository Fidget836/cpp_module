#include "Dog.class.hpp"
#include "Brain.class.hpp"

Dog::Dog() : Animal::Animal("Dog")
{
	std::cout << "Dog constructor called." << std::endl;
	brainCat = new Brain;
}

Dog::~Dog()
{
	delete brainCat;
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << type << " Wouf Wouf" << std::endl;
}
