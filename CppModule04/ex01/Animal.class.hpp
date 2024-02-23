#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP

#include <iostream>
#include <vector>

class Animal
{
	protected :
		std::string type;

	public :
		Animal();
		Animal(std::string typeArg);
		virtual ~Animal();
		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif
