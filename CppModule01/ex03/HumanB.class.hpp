#ifndef HUMANB_CLASS_HPP
#define HUMANB_CLASS_HPP

#include <iostream>
#include "Weapon.class.hpp"

class HumanB
{
	private :
		std::string name;
		Weapon *weapon;

	public :
		HumanB(std::string name);
		~HumanB();
		void set_weapon(Weapon &weaponArg);
		void attack(void);
};

#endif
