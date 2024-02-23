#include "GradeTooLowException.class.hpp"

const char* GradeTooLowException::what() const throw()
{
	return ("You are not in the range, the grade min is 150 or the bureaucrat is too low grade for do this task !");
}
