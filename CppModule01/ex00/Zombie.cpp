#include "Zombie.hpp"

Zombie::Zombie(std::string argName)
{
	this->name = argName;
	this->announce();
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
