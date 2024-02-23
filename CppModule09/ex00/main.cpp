#include "BitcoinExchange.class.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Exchange *exchange = new Exchange;
		std::ifstream intputFile(argv[1]);
		if (!intputFile.is_open())
		{
			std::cerr << "Impossible d'acceder a la base de donnees" << std::endl;
			return (1);
		}
		std::string line;
		while(std::getline(intputFile, line))
		{
			try
			{
				exchange->checkData(line);
				exchange->checkPrice();
				exchange->printValue();
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		delete (exchange);
	}
	else
	{
		std::cout << "You need to put a database in argument !" << std::endl;
		return (1);
	}
	return (0);
}
