/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:45 by smoore            #+#    #+#             */
/*   Updated: 2025/04/17 18:11:01 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
#include "../inc/Fixed.hpp"

//float roundf (float x);

class Point	
{
	private:
		Fixed	_x;
		Fixed	_y;

	public:
		Point();
		Point(float x, float y);
		Point(const Point& other);
		Point&	operator=(const Point& other);
		~Point();
	
		Fixed	getX() const;
		Fixed	getY() const;
};
