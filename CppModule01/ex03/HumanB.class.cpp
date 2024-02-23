#include "Weapon.class.hpp"
#include "HumanB.class.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::set_weapon(Weapon &weaponArg)
{
	weapon = &weaponArg;
}

void	HumanB::attack(void)
{
	if (weapon != NULL)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their hand" << std::endl;
}
