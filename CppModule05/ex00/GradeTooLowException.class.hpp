#ifndef GRADETOOLOWEXCEPTION
#define GRADETOOLOWEXCEPTION

#include <exception>
#include <iostream>

class GradeTooLowException : public std::exception
{
	public:
		const char* what() const throw();
};

#endif
