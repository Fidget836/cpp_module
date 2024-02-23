#ifndef FORM_CLASS_HPP
#define FORM_CLASS_HPP

#include <iostream>

class Form
{
	private:
		const std::string name;
		bool sign;
		const int gradeSign;
		const int gradeExec;

	public:
		Form(const std::string nameArg, const int gradeSignArg, const int gradeExecArg);
		~Form();

		const std::string getName(void);
		bool getSign(void);
		const int getGradeSign(void);
		const int getGradeExec(void);

		void	beSigned(int gradeSignArg);
};

#endif
