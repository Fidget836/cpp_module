#pragma once

template <typename T>

void	swap(T &arg1, T &arg2)
{
	T temp;
	temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

template <typename T>

T	min(T value1, T value2)
{
	if (value1 == value2)
		return (value2);
	else if (value1 < value2)
		return (value1);
	return (value2);
}

template <typename T>

T	max(T value1, T value2)
{
	if (value1 == value2)
		return (value2);
	else if (value1 > value2)
		return (value1);
	return (value2);
}
