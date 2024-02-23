#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPointeur = &str;
	std::string &strRef = str;

	std::cout << "STR : " << &str << std::endl;
	std::cout << "strPointeur : " << strPointeur << std::endl;
	std::cout << "strRef : " << &strRef << std::endl;

	std::cout << "STR : " << str << std::endl;
	std::cout << "strPointeur : " << *strPointeur << std::endl;
	std::cout << "strRef : " << strRef << std::endl;
	return (0);
}
