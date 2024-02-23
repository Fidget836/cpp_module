#ifndef WRONGCAT_CLASS_HPP
#define WRONGCAT_CLASS_HPP

#include "wrongAnimal.class.hpp"

class wrongCat : public wrongAnimal
{
	private :

	public :
		wrongCat();
		~wrongCat();
		void makeSound(void) const;
};

#endif
