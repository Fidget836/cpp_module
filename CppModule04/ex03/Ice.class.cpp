#include "Ice.class.hpp"
#include "ICharacter.class.hpp"

Ice::Ice() : AMateria::AMateria("Ice")
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice()
{
}

Ice::Ice(const Ice& other) : AMateria("ice") {
	*this = other;
}

Ice& Ice::operator=(const Ice& other) {
	this->_type = other._type;

	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "Use freeze on " << target.getName() << std::endl;
}
