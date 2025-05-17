/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:45 by smoore            #+#    #+#             */
/*   Updated: 2025/04/17 18:11:16 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"
#include "../inc/Fixed.hpp"


Point::Point() : _x(0), _y(0){}

Point::Point(const float x, const float y)
{
	_x = x;
	_y = y;
}

Point::Point(const Point& other)
{
	*this = other;
}

Point& Point::operator=(const Point& other)
{
	if (this != &other)
	{
		_x = other.getX();
		_y = other.getY();
	}
	return (*this);
}

Point::~Point() {}


Fixed	Point::getX() const
{
	return _x;
}

Fixed	Point::getY() const
{
	return _y;
}
