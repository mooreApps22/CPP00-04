/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:15:17 by smoore            #+#    #+#             */
/*   Updated: 2025/04/01 18:27:37 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/data.h" 
#include "../inc/PhoneBook.hpp"
#include "../inc/Contact.hpp"

void	phonebook(void)
{
	std::string	username;	
	std::string	input;	
	PhoneBook	blackbook;
	
	username = promptInput("What is your name?\n");
	std::cout << "\n" << username << "'s Little Blackbook" << std::endl;
	while (true)
	{
		input = promptInput("Instructions: Enter ADD, SEARCH, or EXIT: ");
		input = toUppercase(input);
		if (input == "ADD")
			addRoutine(&blackbook);
		else if (input == "SEARCH")
			searchRoutine(&blackbook);
		else if (input == "EXIT")
			exit(EXIT_SUCCESS);
	}
}

int		main(void)
{
	phonebook();
	return (EXIT_SUCCESS);
}
