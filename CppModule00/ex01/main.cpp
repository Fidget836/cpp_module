#include "Phonebook.hpp"

int	main()
{
	PhoneBook phone;

	phone.welcome();
	std::string input = "";
	std::cout << "> ";
	while (getline(std::cin, input))
	{
		if (input.compare("ADD") == 0)
			phone.addContact();
		else if(input.compare("SEARCH") == 0)
		{
			phone.printContact();
			phone.searchContact();
		}
		else if (input.compare("EXIT") == 0)
			break;
		else
			std::cout << "Command not found !" << std::endl;
		std::cout << "> ";
	}
	return (0);
}
