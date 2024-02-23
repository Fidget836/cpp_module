#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->i = 0;
	this->max = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::welcome(void)
{
	std::cout << "**Manuel d'utilisation du telephone**" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "|     ADD : Ajouter un contact      |"<< std::endl;
	std::cout << "|   SEARCH : Chercher un contact    |" << std::endl;
	std::cout << "|   EXIT : Eteindre le telephone    |" << std::endl;
	std::cout << "------------------------------------" << std::endl;
}

void	PhoneBook::addContact(void)
{
	int	flag = 0;
	std::string	firstName= "";
	std::string	lastName= "";
	std::string	nickName= "";
	std::string	phoneNumber= "";
	std::string	darkestSecret= "";

	while (std::cin.good() && (firstName.empty() == 1 || flag == 1))
	{
		flag = 0;
		std::cout << "Enter your firstname > ";
		getline(std::cin, firstName);
		if (firstName.empty() == 1)
		{
			flag = 1;
			std::cout << "Invalid input : enter non empty firstname !" << std::endl;
		}
		else if (contacts[this->i].setFirstName(firstName) == 1)
		{
			flag = 1;
			std::cout << "Invalid input : enter a valid firstname !" << std::endl;
		}
	}
	while (std::cin.good() && (lastName.empty() == 1 || flag == 1))
	{
		flag = 0;
		std::cout << "Enter your lastName > ";
		getline(std::cin, lastName);
		if (lastName.empty() == 1)
		{
			flag = 1;
			std::cout << "Invalid input : enter non empty lastName !" << std::endl;
		}
		else if (contacts[this->i].setlastName(lastName) == 1)
		{
			flag = 1;
			std::cout << "Invalid input : enter a valid lastName !" << std::endl;
		}
	}
	while (std::cin.good() && (nickName.empty() == 1 || flag == 1))
	{
		flag = 0;
		std::cout << "Enter your nickName > ";
		getline(std::cin, nickName);
		if (nickName.empty() == 1)
		{
			flag = 1;
			std::cout << "Invalid input : enter non empty nickName !" << std::endl;
		}
		else if (contacts[this->i].setnickName(nickName) == 1)
		{
			flag = 1;
			std::cout << "Invalid input : enter a valid nickName !" << std::endl;
		}
	}
	while (std::cin.good() && (phoneNumber.empty() == 1 || flag == 1))
	{
		flag = 0;
		std::cout << "Enter your phoneNumber > ";
		getline(std::cin, phoneNumber);
		if (phoneNumber.empty() == 1)
		{
			flag = 1;
			std::cout << "Invalid input : enter non empty phoneNumber !" << std::endl;
		}
		else if (contacts[this->i].setphoneNumber(phoneNumber) == 1)
		{
			flag = 1;
			std::cout << "Invalid input : enter a valid phoneNumber !" << std::endl;
		}
	}
	while (std::cin.good() && (darkestSecret.empty() == 1 || flag == 1))
	{
		flag = 0;
		std::cout << "Enter your darkestSecret > ";
		getline(std::cin, darkestSecret);
		if (darkestSecret.empty() == 1)
		{
			flag = 1;
			std::cout << "Invalid input : enter non empty darkestSecret !" << std::endl;
		}
		else if (contacts[this->i].setdarkestSecret(darkestSecret) == 1)
		{
			flag = 1;
			std::cout << "Invalid input : enter a valid darkestSecret !" << std::endl;
		}
	}
	if(this->i == 7)
	{
		this->i = 0;
		this->max = 1;
	}
	else
		this->i++;
}

void	PhoneBook::searchContact(void)
{
	std::string	numberChar;
	int	numberInt = -1;
	int	skip = 0;

	if (this->i == 0 && this->max == 0)
		return ;
	while (numberInt == -1)
	{
		skip = 0;
		std::cout << "Enter the number for select your contact : ";
		getline(std::cin, numberChar);
		for (size_t i = 0; i < numberChar.size(); i++)
		{
			if (isdigit(numberChar[i]) == 0)
			{
				numberInt = -2;
				break ;
			}
		}
		if (numberInt == -2 || numberChar.empty() == 1)
		{
			std::cout << "Error, enter a number !" << std::endl;
			numberInt = -1;
			skip = 1;
		}
		if (skip != 1)
		{
			numberInt = std::atoi(numberChar.c_str());
			std::string	check = contacts[7].getFirstName();
			if (this->i == 7 && numberInt == 7 && check[0] != '\0')
				break ;
			else if (this->max == 1 && numberInt >= 0 && numberInt <= 7)
				break ;
			else if (numberInt < 0 || numberInt > this->i - 1)
			{
				std::cout << numberInt << ": is invalid number !" << std::endl;
				numberInt = -1;
			}
		}
	}
	std::cout << "FirstName : " << contacts[numberInt].getFirstName() << std::endl;
	std::cout << "LastName : " << contacts[numberInt].getLastName() << std::endl;
	std::cout << "NickName : " << contacts[numberInt].getNickName() << std::endl;
	std::cout << "Phone Number : " << contacts[numberInt].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << contacts[numberInt].getDarkestSecret() << std::endl;
}

void	PhoneBook::printContact(void)
{
	if (this->i == 0 && this->max == 0)
	{
		std::cout << "You have 0 contact" << std::endl;
		return ;
	}
	if (this->max == 1)
	{
		for (int i = 0; i < 8; i++)
		{
			std::cout << "         " << i << "|";
			std::cout << contacts[i].getFirstNameLittle() << "|";
			std::cout << contacts[i].getLastNameLittle() << "|";
			std::cout << contacts[i].getNickNameLittle() << std::endl;
		}
	}
	else
	{
		for (int i = 0; i < this->i; i++)
		{
			std::cout << "         " << i << "|";
			std::cout << contacts[i].getFirstNameLittle() << "|";
			std::cout << contacts[i].getLastNameLittle() << "|";
			std::cout << contacts[i].getNickNameLittle() << std::endl;
		}
		std::string check = contacts[7].getLastNameLittle();
		if (this->i == 7 &&  check[0] != '\0')
		{
			std::cout << "         " << i << "|";
			std::cout << contacts[7].getFirstNameLittle() << "|";
			std::cout << contacts[7].getLastNameLittle() << "|";
			std::cout << contacts[7].getNickNameLittle() << std::endl;
		}
	}
}

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::getFirstName(void) const
{
	return (this->firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->lastName);
}

std::string	Contact::getNickName(void) const
{
	return (this->nickName);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->darkestSecret);
}

std::string	Contact::getFirstNameLittle(void) const
{
	return (this->firstNameLittle);
}

std::string	Contact::getLastNameLittle(void) const
{
	return (this->lastNameLittle);
}

std::string	Contact::getNickNameLittle(void) const
{
	return (this->nickNameLittle);
}

int	Contact::setFirstName(std::string firstName)
{
	if (firstName == "")
		return (1);
	for (size_t i = 0; i < firstName.size(); i++)
	{
		if (isalpha(firstName[i]) == 0)
			return (1);
	}
	this->firstName = firstName;
	if (firstName.size() > 10)
	{
		firstName[9] = '.';
		firstName.erase(10, firstName.size() - 10);
	}
	else if (firstName.size() < 10)
	{
		int	fill = 10 - firstName.size();
		firstName.insert(0, fill, ' ');
	}
	this->firstNameLittle = firstName;
	return (0);
}

int	Contact::setlastName(std::string lastName)
{
	if (lastName == "")
		return (1);
	for (size_t i = 0; i < lastName.size(); i++)
	{
		if (isalpha(lastName[i]) == 0)
			return (1);
	}
	this->lastName = lastName;
	if (lastName.size() > 10)
	{
		lastName[9] = '.';
		lastName.erase(10, lastName.size() - 10);
	}
	else if (lastName.size() < 10)
	{
		int	fill = 10 - lastName.size();
		lastName.insert(0, fill, ' ');
	}
	this->lastNameLittle = lastName;
	return (0);
}

int	Contact::setnickName(std::string nickName)
{
	if (nickName == "")
		return (1);
	for (size_t i = 0; i < nickName.size(); i++)
	{
		if (isalpha(nickName[i]) == 0)
			return (1);
	}
	this->nickName = nickName;
	if (nickName.size() > 10)
	{
		nickName[9] = '.';
		nickName.erase(10, nickName.size() - 10);
	}
	else if (nickName.size() < 10)
	{
		int	fill = 10 - nickName.size();
		nickName.insert(0, fill, ' ');
	}
	this->nickNameLittle = nickName;
	return (0);
}

int	Contact::setphoneNumber(std::string phoneNumber)
{
	if (phoneNumber == "")
		return (1);
	for (size_t i = 0; i < phoneNumber.size(); i++)
	{
		if (isdigit(phoneNumber[i]) == 0)
			return (1);
	}
	if (phoneNumber.length() > 10 || phoneNumber.length() < 10)
		return (1);
	this->phoneNumber = phoneNumber;
	return (0);
}

int	Contact::setdarkestSecret(std::string darkestSecret)
{
	if (darkestSecret == "")
		return (1);
	this->darkestSecret = darkestSecret;
	return (0);
}
