#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"

int	main()
{
	ClapTrap Humain("David");
	ScavTrap sousHumain("Robert");
	Humain.attack("Goliath");
	sousHumain.attack("Goliath");
	Humain.takeDamage(2);
	Humain.beRepaired(1);
	Humain.takeDamage(2);
	Humain.takeDamage(2);
	Humain.takeDamage(2);
	Humain.attack("Goliath");
	sousHumain.takeDamage(20);
	sousHumain.takeDamage(8);
	sousHumain.beRepaired(11);
	sousHumain.guardGate();
	Humain.takeDamage(2);
	Humain.takeDamage(2);
	Humain.takeDamage(2);
	Humain.attack("Goliath");
	Humain.beRepaired(1);
}
