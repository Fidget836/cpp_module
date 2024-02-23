#include "Bureaucrat.class.hpp"
#include "GradeTooHighException.class.hpp"
#include "GradeTooLowException.class.hpp"
#include <iostream>

std::ostream &operator<<(std::ostream &o, Bureaucrat &source)
{
	o << source.getName() << ", bureaucrat grade " << source.getGrade() << std::endl;
	return (o);
}

int	main()
{
	try
	{
		Bureaucrat Steven("Steven", 145);
		try
		{
			Steven.decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cout << "Decrement is not good : " << e.what() << std::endl;
		}
		std::cout << Steven << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
