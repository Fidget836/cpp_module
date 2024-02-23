#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(std::string nameArg)
{
	name = nameArg;
	life = 10;
	energy = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::attack(const std::string& target)
{
	if (life <= 0 || energy <= 0)
		return ;
	std::cout << name << " attacks " << target <<", causing " << attackDamage << " points of damage!" << std::endl;
	energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (life <= 0 || energy <= 0)
		return ;
	std::cout << name << " lost " << amount << " of Life" << std::endl;
	life -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (life <= 0 || energy <= 0)
		return ;
	std::cout << name << " regen " << amount << " of Life" << std::endl;
	energy--;
	life += amount;
}
