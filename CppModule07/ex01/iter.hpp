#pragma once
#include <iostream>

template <typename T>

void	iter(T *tab, int length, void (*function)(T &num))
{
	for (int i = 0; i < length; i++)
	{
		function(tab[i]);
	}
}

template <typename T>

void	funcIter(T &num)
{
	std::cout << "Before num : " << num;
	num += 1;
	std::cout << " -> After num : " << num << std::endl;
}
