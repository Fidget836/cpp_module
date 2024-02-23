#include "Bureaucrat.class.hpp"
#include "GradeTooHighException.class.hpp"
#include "GradeTooLowException.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
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
		Bureaucrat Steven("Steven", 30);
		AForm *form1 = new ShrubberyCreationForm("jardin");
		//AForm *form2 = new RobotomyRequestForm("Alfred");
		//AForm *form3 = new PresidentialPardonForm("Kencho");
		form1->beSigned(Steven.getGrade());
		//form2->beSigned(Steven.getGrade());
		//form3->beSigned(Steven.getGrade());
		std::cout << "Form 1, Sign : " << form1->getSign() << std::endl;
		//std::cout << "Form 2, Sign : " << form2->getSign() << std::endl;
		//std::cout << "Form 3, Sign : " << form3->getSign() << std::endl;
		form1->execute(Steven);
		//form2->execute(Steven);
		//form3->execute(Steven);
		delete (form1);
		// delete (form2);
		// delete (form3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
