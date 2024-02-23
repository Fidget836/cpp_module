#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "Animal.class.hpp"
#include "Brain.class.hpp"

class Cat : public Animal
{
	private :
		Brain* brainCat;

	public :
		Cat();
		~Cat();
		void makeSound(void) const;
};

#endif
