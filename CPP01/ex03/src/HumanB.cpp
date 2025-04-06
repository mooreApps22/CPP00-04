/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:45 by smoore            #+#    #+#             */
/*   Updated: 2025/04/05 17:29:30 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/data.h"
#include "../inc/HumanB.hpp"
/*
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		HumanB(std::string name);
		~HumanB();

		void	attack(void);
		void	setWeapon(Weapon &weapon);

*/

static Weapon	noWeapon("No Weapon");

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB() {}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;	
}
