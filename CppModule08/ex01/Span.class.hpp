#pragma once
#include <list>
#include <stdexcept>
#include <algorithm>
#include <iostream>

class Span
{
	protected:
		unsigned int _N;
		std::list<int> _List;

	public:
		Span(unsigned int N);
		~Span();
		Span();
		Span(const Span &src);
		Span &operator=(const Span &src);
		void	addNumber(int num);
		int		shortestSpan(void);
		int		longestSpan(void);
};
