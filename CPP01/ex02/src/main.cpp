/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:45 by smoore            #+#    #+#             */
/*   Updated: 2025/04/05 15:37:06 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/data.h"

void	print_statements(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "The memory address of the string variable: " << &string << std::endl;
	std::cout << "The memory address of the stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address of the stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable: " << string << std::endl;
	std::cout << "The value of the stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value of the stringREF: " << stringREF << std::endl;
}

int	main(void)
{
	print_statements();
	return(0);
}
