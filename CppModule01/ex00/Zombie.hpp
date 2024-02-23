#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cctype>


class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		Zombie(std::string argName);
		~Zombie();
		void announce(void);
		Zombie* newZombie(std::string name);
};

		void	randomChump(std::string name);

#endif
