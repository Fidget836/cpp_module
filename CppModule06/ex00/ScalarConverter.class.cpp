#include "ScalarConverter.class.hpp"
#include <iomanip>
#include <climits>
#include <cfloat>

char ScalarConverter::charValue;
int	ScalarConverter::intValue;
float ScalarConverter::floatValue;
double ScalarConverter::doubleValue;


ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src)
{
	if (this != &src)
	{
		this->charValue = src.charValue;
		this->intValue = src.intValue;
		this->floatValue = src.floatValue;
		this->doubleValue = src.doubleValue;
	}
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

int	checkFirstIsNumber(char *str)
{
	if (str[0] >= '0' && str[0] <= '9')
		return (0);
	return (1);
}

void ScalarConverter::convert(char *str)
{
	std::string strConvert(str);
	long long longLongValue = 0;
	if (strConvert.size() > 18)
	{
		std::cout << "Your number is too high !" << std::endl;
		return ;
	}
	if (checkFirstIsNumber(str) == 0)
		longLongValue = std::stoll(strConvert);
	else
	{
		std::cout << "\033[31mIntValue : " << "Impossible" << "\033[0m" << std::endl;
		std::cout << "\033[33mcharValue : " << "Impossible" << "\033[0m" << std::endl;
		std::cout << "\033[34mfloatValue : " << "nanf" << "\033[0m" << std::endl;
		std::cout << "\033[35mdoubleValue : " << "nan" << "\033[0m" << std::endl;
		return ;
	}

	if (longLongValue < INT_MAX && longLongValue > INT_MIN && checkFirstIsNumber(str) == 0)
	{
		intValue = std::stoi(strConvert);
		std::cout << "\033[31mIntValue : " << intValue << "\033[0m" << std::endl;
	}
	else
		std::cout << "\033[31mIntValue : " << "Impossible" << "\033[0m" << std::endl;

	if (intValue > 32 && intValue < 127 && checkFirstIsNumber(str) == 0)
	{
		charValue = intValue;
		std::cout << "\033[33mcharValue : " << charValue << "\033[0m" << std::endl;
	}
	else
		std::cout << "\033[33mcharValue : " << "Impossible" << "\033[0m" << std::endl;

	if (longLongValue < FLT_MAX && longLongValue > FLT_MIN && checkFirstIsNumber(str) == 0)
	{
		floatValue = std::stof(strConvert);
		std::cout << "\033[34mfloatValue : " << std::fixed << std::setprecision(2) << floatValue << "f" << "\033[0m" << std::endl;
	}
	else
				std::cout << "\033[34mfloatValue : " << "Impossible" << "\033[0m" << std::endl;

	if (longLongValue < DBL_MAX && longLongValue > DBL_MIN && checkFirstIsNumber(str) == 0)
	{
		doubleValue = std::stod(strConvert);
		std::cout << "\033[35mdoubleValue : " << std::fixed << std::setprecision(2) << doubleValue << "\033[0m" << std::endl;
	}
	else
		std::cout << "\033[35mdoubleValue : " << "Impossible" << "\033[0m" << std::endl;
};
