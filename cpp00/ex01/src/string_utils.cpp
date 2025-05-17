/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:15:17 by smoore            #+#    #+#             */
/*   Updated: 2025/04/01 15:35:20 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/data.h" 
#include "../inc/PhoneBook.hpp"
#include "../inc/Contact.hpp"

std::string toUppercase(const std::string& input)
{
	std::string	result;
	for (size_t i = 0; i < input.length(); ++i)
		result += std::toupper(input[i]);
	return (result);
}

bool	isAllBlanks(const std::string& str)
{
	return (str.find_first_not_of(" \f\n\r\t\v") == std::string::npos);
}
