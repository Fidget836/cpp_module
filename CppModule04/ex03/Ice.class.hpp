#ifndef ICE_CLASS_HPP
#define ICE_CLASS_HPP

#include <iostream>
#include "AMateria.class.hpp"

class Ice : public AMateria
{
	protected:

	public:
		Ice();
		Ice(const Ice& other);
		~Ice();
		Ice& operator=(const Ice& other);
		std::string const &getType() const;
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
