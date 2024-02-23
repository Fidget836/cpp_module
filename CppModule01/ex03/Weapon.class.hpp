#ifndef WEAPON_CLASS_HPP
#define WEAPON_CLASS_HPP

#include <iostream>

class Weapon
{
	private :
		std::string type;

	public :
		Weapon();
		Weapon(std::string weapon);
		~Weapon();
		std::string getType(void);
		void setType(std::string newType);
};

#endif
