#include "Zombie.hpp"

int	main()
{
	Zombie *Zombie = zombieHorde(5, "Hulk");
	delete[] Zombie;
}
