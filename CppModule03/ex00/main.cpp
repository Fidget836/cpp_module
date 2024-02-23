#include "ClapTrap.class.hpp"

int	main()
{
	ClapTrap Humain("David");
	Humain.attack("Goliath");
	Humain.attack("Goliath");
	Humain.takeDamage(2);
	Humain.beRepaired(1);
	Humain.takeDamage(2);
	Humain.takeDamage(2);
	Humain.takeDamage(2);
	Humain.attack("Goliath");
	Humain.takeDamage(2);
	Humain.takeDamage(2);
	Humain.takeDamage(2);
	Humain.attack("Goliath");
	Humain.beRepaired(1);
}
