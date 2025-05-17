/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:45 by smoore            #+#    #+#             */
/*   Updated: 2025/04/28 15:38:20 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"
#include <iostream>

Fixed	crossProduct(Point const& a, Point const& b, Point const& p);
bool	bsp(Point const a, Point const b, Point const c, Point const p);

int main( void )
{
	Point	A(2.2f, 3.0f);
	Point	B(0.5f, 1.0f);
	Point	C(3.0f, 1.0f);
	Point	P1(2.02f, 1.5f);
	Point	P2(2.02f, 200.34f);
	Point	P3(1.8f, 1.0f);

	
	std::cout << "Point P1 is " << (bsp(A, B, C, P1) ? "inside" : "outside") << " the triangle ABC." << std::endl;

	std::cout << "Point P2 is " << (bsp(A, B, C, P2) ? "inside" : "outside") << " the triangle ABC." << std::endl;

	std::cout << "Point P3 is " << (bsp(A, B, C, P3) ? "inside" : "outside") << " the triangle ABC." << std::endl;

	return 0;
}
