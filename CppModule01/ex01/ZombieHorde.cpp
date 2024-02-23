#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie* zombieHorde(int N, std::string name)
{
	int	i;
	Zombie	*zombie_horde;

	zombie_horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zombie_horde[i].set_name(name);
		zombie_horde[i].announce();
		i++;
	}
	return (zombie_horde);
}
