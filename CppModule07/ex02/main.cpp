#include "Array.class.hpp"
#include <iostream>

int	main()
{
	Array<int> intTab(10);
	Array<float> intFloat2(5);

	for (unsigned int i = 0; i < 10; i++)
	{
		intTab[i] = i + i;
	}
	for (unsigned int p = 0; p < 10; p++)
	{
		std::cout << "ICI I : " << p << " ARRAY : " << intTab[p] << std::endl;
	}
	try
	{
        std::cout << "Accessing a valid index: " << intTab[5] << std::endl;
        std::cout << "Accessing an invalid index: " << intTab[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
