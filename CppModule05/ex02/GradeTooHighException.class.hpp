#ifndef GRADETOOHIGHEXCEPTION
#define GRADETOOHIGHEXCEPTION

#include <exception>
#include <iostream>

class GradeTooHighException : public std::exception
{
	public:
		const char* what() const throw();
};

#endif
