#include "RobotomyRequestForm.class.hpp"
#include "Bureaucrat.class.hpp"
#include "GradeTooLowException.class.hpp"
#include "NotSign.class.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(std::string targetArg) : target(targetArg), AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm is created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm is destructed" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSign() == false)
		throw(NotSign());
	else if (executor.getGrade() > this->getGradeExec())
		throw(GradeTooLowException());
	else
	{
		std::cout << "Fait des bruits de perceuse. " <<  target << " a été robotomisée avec succès 50\% du temps" << std::endl;
	}
}
