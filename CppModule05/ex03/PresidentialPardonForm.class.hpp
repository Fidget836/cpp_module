#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
#define PRESIDENTIALPARDONFORM_CLASS_HPP

#include "AForm.class.hpp"
#include "Bureaucrat.class.hpp"

class PresidentialPardonForm : public AForm
{
	protected:
		std::string target;

	public:
		PresidentialPardonForm(std::string targetArg);
		~PresidentialPardonForm();

		void execute(Bureaucrat const & executor) const;
};

#endif
