/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:15:25 by smoore            #+#    #+#             */
/*   Updated: 2025/03/31 20:33:39 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/data.h" 
#include "../inc/PhoneBook.hpp"
#include "../inc/Contact.hpp"

// PhoneBook::PhoneBook()
// {
// 	std::cout << "hello contructor" << std::endl;
// }

void	PhoneBook::addNewContact(const Contact& contact)
{
	_contacts[_i] = contact;
	_i = (_i + 1) % MAX; // EX: _i = 2 + 1 mod 8 = 3 or  _i = 7 + 1 mod 8 = 0
}

std::string	fixedWidth(const std::string& detail)
{
	if (detail.length() > 9)
		return (detail.substr(0, 9) + ".");
	return (std::string(10 - detail.length(), ' ') + detail);
}




void	PhoneBook::printSavedContacts(void)
{
	int i = 0;

	while (i < MAX)
	{
		std::cout << "       [" << i << "]" << "|";
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
