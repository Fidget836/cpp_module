#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP

#include <iostream>
#include <vector>

class Animal
{
	protected :
		std::string type;
		Animal();
		Animal(std::string typeArg);

	public :
		virtual ~Animal();
		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif
