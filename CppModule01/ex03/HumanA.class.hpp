#ifndef HUMANA_CLASS_HPP
#define HUMANA_CLASS_HPP

#include <iostream>
#include "Weapon.class.hpp"

class HumanA
{
	private :
		std::string name;
		Weapon *weapon;

	public :
		HumanA(std::string nameArg, Weapon &weaponArg);
		~HumanA();
		void attack(void);
};

#endif
