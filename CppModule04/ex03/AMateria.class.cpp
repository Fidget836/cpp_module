#include "AMateria.class.hpp"

AMateria::AMateria(void) : _type("")
{
}

AMateria::AMateria(std::string const &type) : _type(type)
{
}

AMateria::~AMateria()
{
}

const std::string &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
