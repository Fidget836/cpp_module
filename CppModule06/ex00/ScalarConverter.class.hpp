#ifndef SCALARCONVERTER_CLASS_HPP
#define SCALARCONVERTER_CLASS_HPP

#include <iostream>

class ScalarConverter
{
	protected:
		static char charValue;
		static int	intValue;
		static float floatValue;
		static double doubleValue;

	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		~ScalarConverter();

		static void convert(char *str);
		ScalarConverter &operator=(const ScalarConverter &src);
};

#endif
