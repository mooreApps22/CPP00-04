/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:45 by smoore            #+#    #+#             */
/*   Updated: 2025/04/07 16:25:16 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/data.h"
#include "../inc/Harl.hpp"

void harl(void)
{
	Harl		harl;
	std::string	level;

	while (1)
	{
		std::cout << "Instructions: Enter DEBUG, INFO, WARNING, ERROR" << std::endl;
		std::getline(std::cin, level);
		if (level == "EXIT" || level == "exit")
		{
			std::cout << std::endl;
			exit(0);
		}
		harl.complain(level);
		std::cout << std::endl;
	}
}

int	main(void)
{
	harl();
	return (0);
}
