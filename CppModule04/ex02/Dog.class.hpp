#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include "Animal.class.hpp"
#include "Brain.class.hpp"

class Dog : public Animal
{
	private :
		Brain* brainCat;

	public :
		Dog();
		~Dog();
		void makeSound(void) const;
};

#endif
