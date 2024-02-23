#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "Animal.class.hpp"

class Cat : public Animal
{
	private :

	public :
		Cat();
		~Cat();
		void makeSound(void) const;
};

#endif
