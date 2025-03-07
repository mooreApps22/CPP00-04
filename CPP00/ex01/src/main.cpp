#include "../inc/data.h" 
# include "Contact.hpp"
# include "Phonebook.hpp"

void	prompter(std::string prompt, std::string &input)
{
	std::cout << prompt;
	std::getline(std::cin, input);
}

void	add_routine(std::string input, Phonebook *phonebook)
{
	Contact contact;
	std::cout << "You have selected ADD. Please fill in the contact's details.\n\n";
	const std::string	prompts[] = {
		"Enter the contact's First Name:\n",
		"Enter the contact's Last Name:\n",
		"Enter the contact's Nickname:\n",
		"Enter the contact's Phone Number:\n",
		"Enter the contact's Darkest Secret:\n"
	};
	for (int j = 0; j < NUM; j++)
	{
		prompter(prompts[j], input);
		contact.setDetail(static_cast<type>(j), input);
	}
	phonebook->addContact(contact);
	std::cout << "\nYou're finished filling in this contact's details.\n\n";
}

void	search_routine(std::string input, Phonebook *phonebook, int i)
{

	std::cout << "\nYou have selected SEARCH. Please select an index number.\n";
	phonebook->previewContacts();
	prompter("\nEnter index:\n", input);
	i = std::atoi(input.c_str());
	if (i >= 0 && i < MAX)
		phonebook->displayContactDetails(i);
	else
		std::cout << "Index must be betweeen 0 and " << MAX - 1 << ".\n";
}

int	main(void)
{ 
	std::string	input;
	Phonebook	phonebook;
	int			i;

	std::cout << "Skyy's Little Blackbook\n";
	i = 0;
	while (true)
	{
		std::cout << "Enter ADD, SEARCH, EXIT:\n";
		std::getline(std::cin, input);
		if (input == "ADD" || input == "add")
			add_routine(input, &phonebook);
		else if (input == "SEARCH" || input == "search")
			search_routine(input, &phonebook, i);
		else if (input == "EXIT" || input == "exit")
			exit(0);
		else
			std::cout << "\nI don't know that command :(\n\n";
	}
	return (0);
}
