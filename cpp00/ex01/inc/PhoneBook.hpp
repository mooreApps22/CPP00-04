/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:15:25 by smoore            #+#    #+#             */
/*   Updated: 2025/03/31 19:35:15 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# define MAX 8

# include "Contact.hpp"

class PhoneBook 
{
	private:
		Contact	_contacts[MAX]; // resource that needs to be managed	
		size_t	_i;
		
	public:
		//Default Constructor
		PhoneBook() : _i(0) {};
		// Normal Member Functions 
		void		addNewContact(const Contact& contact);
		void		printSavedContacts(void);
		void		printContactDetails(int i);

		// static const int		_maxContact = 8;
};
