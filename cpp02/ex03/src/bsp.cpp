/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:45 by smoore            #+#    #+#             */
/*   Updated: 2025/04/28 15:53:00 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"
#include "../inc/Fixed.hpp"


Fixed	crossProduct(Point const& a, Point const& b, Point const& c);
bool	bsp(Point const a, Point const b, Point const c, Point const p);

Fixed	crossProduct(Point const& a, Point const& b, Point const& c)
{
	Fixed	abx = b.getX() - a.getX();
	Fixed	aby = b.getY() - a.getY();
	Fixed	acx = c.getX() - a.getX();
	Fixed	acy = c.getY() - a.getY();

	return (abx * acy - aby * acx);
}

bool	bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed	cp1 = crossProduct(a, b, p);	
	Fixed	cp2 = crossProduct(b, c, p);	
	Fixed	cp3 = crossProduct(c, a, p);	

	if (cp1 == Fixed(0) || cp2 == Fixed(0) || cp3 == Fixed(0))
		return (false); // one the side

	bool has_negative = (cp1 < 0) || (cp2 < 0) || (cp3 < 0); // back
	bool has_positive = (cp1 > 0) || (cp2 > 0) || (cp3 > 0); // front

	return (!(has_negative && has_positive));
}
