#include "../inc/data.h" 
#include "../inc/PhoneBook.hpp"
#include "../inc/Contact.hpp"

std::string		promptInput(std::string prompt)
{
	std::string	detailInput;

	std::cout << prompt;
	std::getline(std::cin, detailInput);
	return (detailInput);
}

int		promptIndexInput(std::string prompt)
{
	std::string	strInput;
	int			indexInput;

	std::cout << prompt;
	std::getline(std::cin, strInput);
	for (unsigned long i = 0; i < strInput.length(); i++)
	{
		if (!isdigit(strInput[i]))
			return (-1);
	}
	indexInput = std::atoi(strInput.c_str());
	return (indexInput);
}

void	addRoutine(PhoneBook *blackbook)
{
	Contact				contact;
	const std::string	prompts[] = {
		"Enter the contact's First Name:\n",
		"Enter the contact's Last Name:\n",
		"Enter the contact's Nickname:\n",
		"Enter the contact's Phone Number:\n",
		"Enter the contact's Darkest Secret:\n"
	};
	std::string			detailInput;

	std::cout << "You have selected ADD. Please fill in the contact's details.\n\n";
	for (int i = 0; i < NUM; i++)
	{
		detailInput = promptInput(prompts[i]);
		contact.setDetail(static_cast<type>(i), detailInput);
	}
	blackbook->addNewContact(contact);
	std::cout << "\n" << contact.getFirst() << "'s details have been added.\n\n";
}

void	searchRoutine(PhoneBook *blackbook)
{
	int		indexInput;

	std::cout << "\nYou have entered SEARCH. Please select the index number.\n";
	blackbook->printSavedContacts();
	while (true)
	{
		indexInput = promptIndexInput("\nEnter index:\n");
		if (indexInput >= 0 && indexInput <= 7)
		{
			blackbook->printContactDetails(indexInput);
			break ;
		}
		std::cout << "\nThe index you enter has to be 0-7.\n";
	}
}

int		main()
{
	std::string	user;	
	std::string	input;	
	PhoneBook	blackbook;
	
	std::cout << "What is your name?\n\n";
	std::getline(std::cin, user);
	std::cout << "\n" << user << "'s Little Blackbook\n";
	while (true)
	{
		std::cout << "Instructions: Enter ADD, SEARCH, or EXIT:\n";
		std::getline(std::cin, input);
		if (input == "ADD" || input == "add" || input == "Add")
			addRoutine(&blackbook);
		else if (input == "SEARCH" || input == "search" || input == "Search")
			searchRoutine(&blackbook);
		else if (input == "EXIT" || input == "exit" || input == "Exit")
			exit(EXIT_SUCCESS);
	}
	return (0);
}
