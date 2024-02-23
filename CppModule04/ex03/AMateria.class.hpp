#ifndef AMATERIA_CLASS_HPP
#define AMATERIA_CLASS_HPP

#include <iostream>
class ICharacter;
class IMateriaSource;

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria(void);
		AMateria(std::string const &type);
		virtual ~AMateria();
		const std::string &getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
