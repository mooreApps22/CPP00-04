/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:45 by smoore            #+#    #+#             */
/*   Updated: 2025/04/02 16:53:34 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/data.h"
#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << _name << " constructed." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " deconstructed." << std::endl;
}

Zombie	*newZombie(std::string name)
{
	Zombie *newZombie;

	newZombie = new Zombie(name);
	return (newZombie);
}

std::string	Zombie::getName(void)
{
	return (_name);
}

void	randomChump(std::string name)
{
	Zombie	randomChump(name);
	randomChump.announce();
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
