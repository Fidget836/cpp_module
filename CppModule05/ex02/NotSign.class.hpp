#ifndef NOTSIGN_CLASS_HPP
#define NOTSIGN_CLASS_HPP

#include <exception>
#include <iostream>

class NotSign : public std::exception
{
	public:
		const char* what() const throw();
};

#endif
