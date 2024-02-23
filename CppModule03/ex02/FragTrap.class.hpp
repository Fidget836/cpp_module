#ifndef FRAGTRAP_CLASS_HPP
#define FRAGTRAP_CLASS_HPP

#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap() = delete;
		FragTrap(std::string nameArg);
		~FragTrap();

		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif
