/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_routines.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:15:17 by smoore            #+#    #+#             */
/*   Updated: 2025/03/31 20:16:35 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/data.h" 
#include "../inc/PhoneBook.hpp"
#include "../inc/Contact.hpp"

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
