#ifndef WRONGANIMAL_CLASS_HPP
#define WRONGANIMAL_CLASS_HPP

#include <iostream>

class wrongAnimal
{
	protected :
		std::string type;

	public :
		wrongAnimal();
		wrongAnimal(std::string typeArg);
		~wrongAnimal();
		void makeSound(void) const;
		std::string getType(void) const;
};

#endif
