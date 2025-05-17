/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:54 by smoore            #+#    #+#             */
/*   Updated: 2025/04/05 17:46:41 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <new>
#include "Weapon.hpp" 

class	HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
		//Reference: guarantees that the object exists, otherwise it can't reference
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	attack(void);
};
