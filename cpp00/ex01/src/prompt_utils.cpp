/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt_utils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:15:17 by smoore            #+#    #+#             */
/*   Updated: 2025/04/01 15:57:29 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/data.h" 
#include "../inc/PhoneBook.hpp"
#include "../inc/Contact.hpp"

std::string		promptInput(std::string prompt)
{
	std::string	line;

	std::cout << prompt << std::endl;
	while (true)
	{
		if (!std::getline(std::cin, line))
			exit(99);
		if (!line.empty() && !isAllBlanks(line))
			break ;
	}
	return (line);
}

int		promptIndexInput(std::string prompt)
{
	std::string	line;
	std::string	strInput;
	int			indexInput;

	std::cout << prompt << std::endl;
	while (true)
	{
		if (!std::getline(std::cin, line))
			exit(99);
		if (!line.empty() && !isAllBlanks(line))
			break ;	
	}
	for (unsigned long i = 0; i < strInput.length(); i++)
	{
		if (!isdigit(strInput[i]))
			return (-1);
	}
	indexInput = std::atoi(strInput.c_str());
	return (indexInput);
}
