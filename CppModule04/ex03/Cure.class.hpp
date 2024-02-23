#ifndef CURE_CLASS_HPP
#define CURE_CLASS_HPP

#include "AMateria.class.hpp"

class Cure : public AMateria
{
	private:

	public:
		Cure();
		Cure(const Cure& other);
		~Cure();
		Cure& operator=(const Cure& other);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
