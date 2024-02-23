#include "Weapon.class.hpp"
#include "HumanA.class.hpp"

HumanA::HumanA(std::string nameArg, Weapon &weaponArg)
{
	name = nameArg;
	weapon = &weaponArg;
	//this->weapon.setType(weapon.getType());
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
