#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "wrongAnimal.class.hpp"
#include "wrongCat.class.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();


	const wrongAnimal* meta_2 = new wrongAnimal();
    const wrongAnimal* k = new wrongCat();
    std::cout << k->getType() << " " << std::endl;
    k->makeSound(); // WrongCat sound
    meta_2->makeSound();
    delete k;
    delete meta_2;


	delete i;
	delete j;
	delete meta;
	return 0;
}
