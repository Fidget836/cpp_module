#include "Form.class.hpp"
#include "GradeTooHighException.class.hpp"
#include "GradeTooLowException.class.hpp"

Form::Form(const std::string nameArg, const int gradeSignArg, const int gradeExecArg) : name(nameArg), sign(false), gradeSign(gradeSignArg), gradeExec(gradeExecArg)
{
}

Form::~Form()
{
}

const std::string Form::getName(void)
{
	return (name);
}

bool	Form::getSign(void)
{
	return (sign);
}

const int Form::getGradeSign(void)
{
	return (gradeSign);
}

const int Form::getGradeExec(void)
{
	return (gradeExec);
}

void	Form::beSigned(int gradeSignArg)
{
	if (gradeSign < 1)
		throw(GradeTooHighException());
	else if (gradeSignArg > gradeSign || gradeSign > 150)
		throw(GradeTooLowException());
	else
		sign = true;
}
