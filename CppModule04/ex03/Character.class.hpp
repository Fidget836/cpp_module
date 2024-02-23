#ifndef CHARACTER_CLASS_HPP
#define CHARACTER_CLASS_HPP

#include "ICharacter.class.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		std::vector<AMateria*> Inventory;
		int	index;

	public:
		Character();
		Character(std::string nameArg);
		Character(const Character& other);
		Character& operator=(const Character& other);
		const std::string& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
