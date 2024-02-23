#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
#define SHRUBBERYCREATIONFORM_CLASS_HPP

#include "AForm.class.hpp"
#include "Bureaucrat.class.hpp"

class ShrubberyCreationForm : public AForm
{
	protected:
		std::string target;

	public:
		ShrubberyCreationForm(std::string targetArg);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const & executor) const;
};

#endif
