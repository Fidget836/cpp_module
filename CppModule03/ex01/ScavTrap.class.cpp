#include "ScavTrap.class.hpp"
#include "ClapTrap.class.hpp"

ScavTrap::ScavTrap(std::string nameArg) : ClapTrap (nameArg)
{
	std::cout << "Constructor ScavTrap called" << std::endl;
	life = 100;
	energy = 50;
	attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (life <= 0 || energy <= 0)
		return ;
	std::cout << "ScavTrap : " << name << " attacks " << target <<", causing " << attackDamage << " points of damage!" << std::endl;
	energy--;
}

void ScavTrap::guardGate(void)
{
	if (life <= 0 || energy <= 0)
		return ;
	std::cout << "ScavTrap : " << name << " enter in gate keeper mode !" << std::endl;
}
