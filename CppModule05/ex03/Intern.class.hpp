#ifndef INTERN_CLASS_HPP
#define INTERN_CLASS_HPP

#include "AForm.class.hpp"
#include <iostream>

class Intern
{
	private:

	public:
		Intern();
		~Intern();

		AForm *makeForm(std::string nameFormArg, std::string targetArg);
		AForm *makeShrubberyCreationForm(std::string targetArg);
		AForm *makeRobotomyRequestForm(std::string targetArg);
		AForm *makePresidentialPardonForm(std::string targetArg);
};

#endif
