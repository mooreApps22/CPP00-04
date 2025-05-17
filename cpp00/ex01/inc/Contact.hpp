/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:15:25 by smoore            #+#    #+#             */
/*   Updated: 2025/03/31 20:36:03 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

enum	type
{
	FIRST,
	LAST,
	NICKNAME,
	PHONE,
	SECRET,
	NUM
};

class	Contact
{
	private:
		std::string	_detail[NUM];
	public:
		Contact();
		Contact(const Contact& other);
		~Contact();

		void		setDetail(type field, std::string str);
		std::string	getDetail(type field);

		void		setFirst(std::string str);
		void		setLast(std::string str);
		void		setNickname(std::string str);
		void		setPhone(std::string str);
		void		setSecret(std::string str);

		std::string	getFirst(void);
		std::string	getLast(void);
		std::string	getNickname(void);
		std::string	getPhone(void);
		std::string	getSecret(void);
};
