#include "GradeTooHighException.class.hpp"

const char* GradeTooHighException::what() const throw()
{
	return ("You are not in the range, the grade max is 1!");
}
