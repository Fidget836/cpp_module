#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cstdlib>

class Contact
{
	private:
		std::string firstName;
		std::string firstNameLittle;
		std::string lastName;
		std::string lastNameLittle;
		std::string nickName;
		std::string nickNameLittle;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		Contact();
		~Contact();
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickName(void) const;
	std::string getPhoneNumber(void) const;
	std::string getDarkestSecret(void) const;

	std::string getFirstNameLittle(void) const;
	std::string getLastNameLittle(void) const;
	std::string getNickNameLittle(void) const;

	int	setFirstName(std::string firstName);
	int	setlastName(std::string lastName);
	int	setnickName(std::string nickName);
	int	setphoneNumber(std::string phoneNumber);
	int	setdarkestSecret(std::string darkestSecret);
};

class PhoneBook
{
	private:
		Contact contacts[8];
		int	i;
		int	max;

	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(void);
		void	printContact(void);
		void	searchContact(void);
		void	welcome(void);
};

#endif
