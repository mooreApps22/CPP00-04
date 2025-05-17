/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:54 by smoore            #+#    #+#             */
/*   Updated: 2025/04/05 17:49:39 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <new>

class	Weapon 
{
	private:
		std::string	_type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		
		void				setType(std::string type);
		const std::string	&getType() const;
};
	
