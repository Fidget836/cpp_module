#include "Bureaucrat.class.hpp"
#include "GradeTooHighException.class.hpp"
#include "GradeTooLowException.class.hpp"
#include "AForm.class.hpp"

Bureaucrat::Bureaucrat(const std::string nameArg, int gradeArg) : name(nameArg)
{
	if (gradeArg < 1)
		throw(GradeTooHighException());
	else if (gradeArg > 150)
		throw(GradeTooLowException());
	else
		grade = gradeArg;
}

Bureaucrat::~Bureaucrat()
{
}

const std::string Bureaucrat::getName(void)
{
	return (name);
}

int Bureaucrat::getGrade(void) const
{
	return (grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (grade - 1 < 1)
		throw (GradeTooHighException());
	else
		grade -= 1;
}

void	Bureaucrat::decrementGrade(void)
{
	if (grade + 1 > 150)
		throw (GradeTooLowException());
	else
		grade += 1;
}

void	Bureaucrat::signForm(AForm *AFormArg)
{
	try
	{
		AFormArg->beSigned(this->getGrade());
		std::cout << Bureaucrat::getName() << " signed " << AFormArg->getName() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << Bureaucrat::getName() << " cannot sign " << AFormArg->getName() << " because " << e.what() << std::endl;
	}
}
