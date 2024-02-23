#include "Bureaucrat.class.hpp"
#include "GradeTooHighException.class.hpp"
#include "GradeTooLowException.class.hpp"
#include "Form.class.hpp"
#include <iostream>

std::ostream &operator<<(std::ostream &o, Bureaucrat &source)
{
	o << source.getName() << ", bureaucrat grade " << source.getGrade() << std::endl;
	return (o);
}

std::ostream &operator<<(std::ostream &o, Form &source)
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
		Bureaucrat Steven("Steven", 146);
		Form *form1 = new Form("form1", 146, 15);
		std::cout << Steven << std::endl;
		std::cout << "Sign : " << form1->getSign() << std::endl;
		Steven.signForm(form1);
		std::cout << "Sign : " << form1->getSign() << std::endl;
		delete form1;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
