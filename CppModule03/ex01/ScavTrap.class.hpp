#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP

#include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap() = delete;
		ScavTrap(std::string nameArg);
		~ScavTrap();

		void attack(const std::string& target);
		void guardGate(void);
};

#endif
