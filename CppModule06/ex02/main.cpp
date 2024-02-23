#include "Base.class.hpp"
#include "A.class.hpp"
#include "B.class.hpp"
#include "C.class.hpp"

#include <iostream>
#include <random>

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "* : Class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "* : Class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "* : Class C" << std::endl;
	else
		std::cout << "* : Unknow Class !" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "& : Class A" << std::endl;
		(void)a;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "& : Class B" << std::endl;
		(void)b;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "& : Class C" << std::endl;
		(void)c;
	}
	catch(const std::exception& e)
	{
	}
}

Base *generate(void)
{
	std::random_device rd;
	std::mt19937 mt(rd());

	int min = 0;
	int max = 2;
	std::uniform_int_distribution<int> dist(min, max);

	int randomNumber = dist(mt);
	if (randomNumber == 0)
		return(new A());
	else if (randomNumber == 1)
		return(new B());
	else if (randomNumber == 2)
		return(new C());
	return (NULL);
}

int	main()
{
	Base *Container;

	Container = generate();
	identify(Container);
	identify(*Container);
	delete Container;
}
