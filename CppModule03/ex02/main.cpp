#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

int	main()
{
	ClapTrap Humain("David");
	ScavTrap sousHumain("Robert");
	FragTrap sousHumain2("Michel");
	Humain.attack("Goliath");
	sousHumain.attack("Goliath");
	sousHumain2.attack("Goliath");
	sousHumain2.takeDamage(25);
	sousHumain2.beRepaired(5);
	sousHumain2.highFivesGuys();
	sousHumain2.takeDamage(25);
	sousHumain2.takeDamage(25);
	sousHumain2.takeDamage(25);
	sousHumain2.takeDamage(25);
	sousHumain2.takeDamage(25);
	sousHumain2.takeDamage(25);
	sousHumain2.highFivesGuys();
}
