#include "Intern.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

AForm *Intern::makeForm(std::string nameFormArg, std::string targetArg)
{
	std::string funcName[] = {"Shruberry Creation",
								"Robotomy Request",
								"Presidential Pardon"};
	AForm*	func[]{new ShrubberyCreationForm(targetArg),
					new RobotomyRequestForm(targetArg),
					new PresidentialPardonForm(targetArg)};
	for (size_t i = 0; i < 3; i++)
	{
		if (funcName[i] == nameFormArg)
		{
			for (size_t y = i + 1; y < 3; y++)
			{
				delete (func[y]);
			}
			std::cout << "\nIntern creates " << nameFormArg << "\n" << std::endl;
			return (func[i]);
		}
		else
			delete (func[i]);
	}
	std::cout << "Intern can't creates " << nameFormArg << std::endl;
	return (NULL);
}
