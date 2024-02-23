#pragma once

#include <iostream>
#include <stack>
#include <deque>

template <typename T>

class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {}
		~MutantStack() {}
		MutantStack(const MutantStack &src){
			*this = src;
		}
		MutantStack &operator=(const MutantStack &src){
			if (this != &src)
			{
			}
			return (*this);
		}
		typedef typename std::deque<T>::iterator iterator;
		iterator begin(){
			return (this->c.begin());
		}
		iterator end(){
			return (this->c.end());
		}
};
