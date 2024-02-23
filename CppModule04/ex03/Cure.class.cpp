#include "Cure.class.hpp"
#include "ICharacter.class.hpp"

Cure::Cure() : AMateria::AMateria("Cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure& other) : AMateria("cure") {
	*this = other;
}

Cure& Cure::operator=(const Cure& other) {
	_type = other._type;
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "Use heals on " << target.getName() << std::endl;
}

