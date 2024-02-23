#include "Character.class.hpp"

Character::Character()
{
}

Character::Character(std::string nameArg)
{
	name = nameArg;
}

Character::Character(const Character& other)
{
	*this = other;
}

Character& Character::operator=(const Character& other)
{
	this->name = other.name;
	return *this;
}

const std::string& Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	if (index < 4)
	{
		Inventory.push_back(m);
	}
}

void Character::unequip(int idx)
{
	int	i;

	i = 0;
	while (Inventory[i] != NULL)
		i++;
	if (idx >= 0 && idx <= i)
		delete Inventory[idx];
}

void Character::use(int idx, ICharacter& target)
{
	std::cout << "Cast the spell " << Inventory[idx]->getType() << " towards " << target.getName() << std::endl;
}
