#include "Bureaucrat.class.hpp"
#include "GradeTooHighException.class.hpp"
#include "GradeTooLowException.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "Intern.class.hpp"
#include <iostream>
class AForm;

std::ostream &operator<<(std::ostream &o, Bureaucrat &source)
{
	o << source.getName() << ", bureaucrat grade " << source.getGrade() << std::endl;
	return (o);
}

std::ostream &operator<<(std::ostream &o, AForm &source)
{
	o << "Form : " << source.getName()
		<< "\n Sign : " << source.getSign()
		<< "\n Grade for sign : " << source.getGradeSign()
		<< "\n Grade for exec : " << source.getGradeExec() << std::endl;
	return (o);
}

int	main()
{
	try
	{
		Intern Intern;
		AForm* Task = Intern.makeForm("Robotomy Request", "Michel");

		delete Task;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
