#ifndef AFORM_CLASS_HPP
#define AFORM_CLASS_HPP

#include <iostream>
class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool sign;
		const int gradeSign;
		const int gradeExec;

	public:
		AForm(const std::string nameArg, const int gradeSignArg, const int gradeExecArg);
		virtual ~AForm();

		const std::string getName(void) const;
		bool getSign(void) const;
		const int getGradeSign(void) const;
		const int getGradeExec(void) const;

		void	beSigned(int gradeSignArg);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

#endif
