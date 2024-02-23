#include "AForm.class.hpp"
#include "Bureaucrat.class.hpp"
#include "GradeTooHighException.class.hpp"
#include "GradeTooLowException.class.hpp"

AForm::AForm(const std::string nameArg, const int gradeSignArg, const int gradeExecArg) : name(nameArg), sign(false), gradeSign(gradeSignArg), gradeExec(gradeExecArg)
{
	std::cout << "AForm supraconstructor called" << std::endl;
}

AForm::AForm() : name(""), sign(false), gradeSign(1), gradeExec(1)
{
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

const std::string AForm::getName(void) const
{
	return (name);
}

bool	AForm::getSign(void) const
{
	return (sign);
}

const int AForm::getGradeSign(void) const
{
	return (gradeSign);
}

const int AForm::getGradeExec(void) const
{
	return (gradeExec);
}

void	AForm::beSigned(int gradeSignArg)
{
	if (gradeSign < 1)
		throw(GradeTooHighException());
	else if (gradeSignArg > gradeSign || gradeSign > 150)
		throw(GradeTooLowException());
	else
		sign = true;
}
