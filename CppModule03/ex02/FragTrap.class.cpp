#include "FragTrap.class.hpp"
#include "ClapTrap.class.hpp"

FragTrap::FragTrap(std::string nameArg) : ClapTrap (nameArg)
{
	std::cout << "Constructor FragTrap called" << std::endl;
	life = 100;
	energy = 100;
	attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (life <= 0 || energy <= 0)
		return ;
	std::cout << "FragTrap : " << name << " attacks " << target <<", causing " << attackDamage << " points of damage!" << std::endl;
	energy--;
}

void FragTrap::highFivesGuys(void)
{
	if (life <= 0 || energy <= 0)
		return ;
	std::cout << "FragTrap : " << name << " : Do you want HIGHT FIVES ?" << std::endl;
}
