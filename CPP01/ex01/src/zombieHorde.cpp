/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:45 by smoore            #+#    #+#             */
/*   Updated: 2025/04/02 17:12:21 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/data.h"
#include "../inc/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*horde;
	
	horde = new Zombie[N];
	for (int i = 0; i < N; i++)	
		horde[i] = Zombie(name);
	return (horde);
}
