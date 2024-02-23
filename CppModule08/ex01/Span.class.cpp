#include "Span.class.hpp"

Span::Span() {}

Span::Span(const Span &src)
{
	*this = src;
}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		this->_N = src._N;
		this->_List = src._List;
	}
	return (*this);
}

Span::Span(unsigned int N)
{
	_N = N;
}

Span::~Span() {}

void Span::addNumber(int num)
{
	if (_List.size() < _N)
		_List.push_back(num);
	else
		throw std::runtime_error("The list is full !");
}

int	Span::shortestSpan(void)
{
	int result;

	result = -1;
	if (_List.size() > 1)
	{
		for (std::list<int>::iterator it = _List.begin(); it != _List.end(); it++)
		{
			if (result == -1)
					result = *it;
			for (std::list<int>::iterator it2 = _List.begin(); it2 != _List.end(); it2++)
			{
				if (*it == *it2)
					continue ;
				else if (std::abs(*it - *it2) < result)
					result = std::abs(*it - *it2);
			}
		}
		return (result);
	}
	else
		throw(std::runtime_error("The list have not enough number !"));
}

int	Span::longestSpan(void)
{
	if (_List.size() > 1)
	{
		std::list<int>::iterator maxElementIterator =  std::max_element(_List.begin(), _List.end());
		int	maxElement = *maxElementIterator;
		std::list<int>::iterator minElementIterator =  std::min_element(_List.begin(), _List.end());
		int	minElement = *minElementIterator;
		int result = maxElement - minElement;
		return (result);
	}
	else
		throw(std::runtime_error("The list have not enough number !"));
}
