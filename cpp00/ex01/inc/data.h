/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:15:25 by smoore            #+#    #+#             */
/*   Updated: 2025/04/01 15:54:18 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

/*
	MANUAL:
		https://en.cppreference.com/w/cpp/header	
		https://cplusplus.com/reference

	Cannot use: 
		*printf(), *alloc(), free()
		namespace <ns_name>
		Containers (vector, list, map, and so forth)
		<algorithm>
*/

# include <iostream>
# include <string>
# include <cstdlib>
# include "PhoneBook.hpp" 
# include "Contact.hpp" 

// string_utils
bool			isAllBlanks(const std::string& str);
std::string		toUppercase(const std::string& input);

// prompt_utils
std::string		promptInput(std::string prompt);
int				promptIndexInput(std::string prompt);

// phonebook routines
void			addRoutine(PhoneBook *blackbook);
void			searchRoutine(PhoneBook *blackbook);


#endif
