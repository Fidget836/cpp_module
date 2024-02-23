#ifndef CLAPTRAP_CLASS_HPP
#define CLAPTRAP_CLASS_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int life;
		int	energy;
		int	attackDamage;

	public:
		ClapTrap(std::string nameArg);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
