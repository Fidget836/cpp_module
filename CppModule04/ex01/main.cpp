#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "wrongAnimal.class.hpp"
#include "wrongCat.class.hpp"

int main()
{
	std::vector<Animal*> tab(10);
	for (size_t i = 0; i < tab.size(); i++)
	{
		if (i < tab.size() / 2)
			tab[i] = new Cat;
		else
			tab[i] = new Dog;
	}

	for (size_t i = 0; i < tab.size(); i++)
	{
		tab[i]->makeSound();
		delete tab[i];
	}
	return 0;
}
