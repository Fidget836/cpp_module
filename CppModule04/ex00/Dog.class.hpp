#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include "Animal.class.hpp"

class Dog : public Animal
{
	private :

	public :
		Dog();
		~Dog();
		void makeSound(void) const;
};

#endif
