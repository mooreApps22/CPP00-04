/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:45 by smoore            #+#    #+#             */
/*   Updated: 2025/04/07 16:35:20 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/data.h"
#include "../inc/Zombie.hpp"

int		my_stoi(std::string str)
{
	std::stringstream	ss;
	int					num;

	ss << str;
	ss >> num;
	return (num);
}

void	zombie(int N)
{
	Zombie	*horde;
	
	horde = zombieHorde(N, "Horde");
	for (int i = 0; i < N; i++)
	{
		std::cout << i + 1 << "-> ";
		horde[i].announce();
	}
	delete[] horde;
}

int	main(int ac, char **av)
{
	if (ac == 2)	
	{
		int	input = my_stoi(av[1]);

		zombie(input);
	}
	return(0);
}
