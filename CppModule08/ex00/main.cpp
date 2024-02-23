#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main()
{
	std::vector<int> intTab;
	intTab.reserve(5);
	intTab.push_back(8);
	intTab.push_back(2);
	intTab.push_back(19);
	intTab.push_back(652);
	intTab.push_back(84);
	easyfind(intTab, 19);
	return (0);
}
