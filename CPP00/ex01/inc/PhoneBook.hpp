#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX 8

# include "Contact.hpp"

class PhoneBook 
{
	private:
		Contact	_contacts[MAX]; // resource that needs to be managed	
		size_t	_i;
	public:
		//Default Constructor
		PhoneBook() : _i(0) {};
		// Normal Member Functions 
		void		addNewContact(const Contact& contact);
		void		printSavedContacts(void);
		void		printContactDetails(int i);
};

void	PhoneBook::addNewContact(const Contact& contact)
{
	_contacts[_i] = contact;
	_i = (_i + 1) % MAX; // EX: _i = 2 + 1 mod 8 = 3 or  _i = 7 + 1 mod 8 = 0
}

std::string	fixedWidth(const std::string& detail)
{
	if (detail.length() > 9)
		return (detail.substr(0, 9) + ".");
	return (detail + std::string(10 - detail.length(), ' '));
}

void	PhoneBook::printSavedContacts(void)
{
	int i = 0;

	while (i < MAX)
	{
		std::cout << "[" << i << "]" << " |";
		std::cout << fixedWidth(_contacts[i].getFirst()) << "|";
		std::cout << fixedWidth(_contacts[i].getLast()) << "|";
		std::cout << fixedWidth(_contacts[i].getNickname()) << "|\n";
		i++;
	}
}

void	printRow(const std::string& heading, const std::string& detail)
{
	std::cout << "\t" << heading << "\t" << detail << "\n";
}

void	PhoneBook::printContactDetails(int i)
{
	std::cout << "\nCONTACT DETAILS\n";	
	printRow("First Name:\t", _contacts[i].getFirst());
	printRow("Last Name:\t", _contacts[i].getLast());
	printRow("Nickname:\t", _contacts[i].getNickname());
	printRow("Phone Number:\t", _contacts[i].getPhone());
	printRow("Darkest Secret:\t", _contacts[i].getSecret());
}

#endif
