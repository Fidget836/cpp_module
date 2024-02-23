#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
#define ROBOTOMYREQUESTFORM_CLASS_HPP

#include "AForm.class.hpp"
#include "Bureaucrat.class.hpp"

class RobotomyRequestForm : public AForm
{
	protected:
		std::string target;

	public:
		RobotomyRequestForm(std::string targetArg);
		~RobotomyRequestForm();

		void execute(Bureaucrat const & executor) const;
};

#endif
