#include "PresidentialPardonForm.class.hpp"
#include "Bureaucrat.class.hpp"
#include "GradeTooLowException.class.hpp"
#include "NotSign.class.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(std::string targetArg) : target(targetArg), AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm is created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm is destructed" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSign() == false)
		throw(NotSign());
	else if (executor.getGrade() > this->getGradeExec())
		throw(GradeTooLowException());
	else
	{
		std::cout << target << " a été pardonnée par Zaphod Beeblebrox" << std::endl;
	}
}

