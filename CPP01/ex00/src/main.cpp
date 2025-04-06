/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:45 by smoore            #+#    #+#             */
/*   Updated: 2025/04/02 16:57:41 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/data.h"
#include "../inc/Zombie.hpp"

std::string	intString(int i)
{
	std::stringstream	ss;

	ss << i;
	return (ss.str());
}

void	zombie(void)
{
	Zombie		*z1;
	std::string	extra = "Extra #";
	std::string	id;
	std::string name;

	z1 = newZombie("Freddy Freak");
	z1->announce();
	std::cout << "Let's here it for " << z1->getName() << "." << std::endl;
	delete z1;
	std::cout << std::endl;

	for (int i = 0; i < 10; ++i)
	{
		id = intString(i);
		name = extra + id;	
		randomChump(name);
	}
}

int	main(void)
{
	zombie();
	return(0);
}
