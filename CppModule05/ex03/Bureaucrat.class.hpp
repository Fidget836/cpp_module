#ifndef BUREAUCRAT_CLASS_HPP
#define BUREAUCRAT_CLASS_HPP

#include <iostream>
#include <exception>
#include <ostream>
class AForm;

class Bureaucrat
{
	protected:
		const std::string name;
		int grade;

	public:
		Bureaucrat(const std::string nameArg, int gradeArg);
		~Bureaucrat();

		const std::string getName(void);
		int	getGrade(void) const;

		void	incrementGrade(void);
		void	decrementGrade(void);
		void	signForm(AForm *AFormArg);
};

#endif
