/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:45 by smoore            #+#    #+#             */
/*   Updated: 2025/04/05 17:39:32 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/data.h"
#include "../inc/Weapon.hpp"
#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"


int	main(void)
{
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);

		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spike club");
		HumanB	jim("Jim");

		jim.setWeapon(club);
		jim.attack();	
		club.setType("some other type of club");
		jim.attack();
	}
	return(0);
}
