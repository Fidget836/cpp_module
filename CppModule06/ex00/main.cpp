#include "ScalarConverter.class.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Not enough argument !" << std::endl;
		return (1);
	}
	else if (argc > 2)
	{
		std::cout << "Too much arguments !" << std::endl;
		return (1);
	}
	ScalarConverter *ScalarConverterMain = new ScalarConverter();
	// ScalarConverter ScalarConverterMain();
	ScalarConverterMain->convert(argv[1]);
	return (0);
}
