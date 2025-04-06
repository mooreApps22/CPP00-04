/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:54 by smoore            #+#    #+#             */
/*   Updated: 2025/04/05 17:48:18 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <new>
#include "Weapon.hpp" 

class	HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
		//Pointer: doesn't guarantee that the object exists, it can start as NULL, and later be set 
	public:
		HumanB(std::string name);
		~HumanB();

		void	attack(void);
		void	setWeapon(Weapon &weapon);
};
