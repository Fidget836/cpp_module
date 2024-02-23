#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>

void	easyfind (T &container, int intParam)
{
	if (std::find(container.begin(), container.end(), intParam) != container.end())
		std::cout << "Found" << std::endl;
	else
		std::cout << "Not Found" << std::endl;
}
