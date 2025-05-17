/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:45 by smoore            #+#    #+#             */
/*   Updated: 2025/04/28 15:11:21 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

const int	Fixed::_bits = 8;

// Constructors 
Fixed::Fixed() : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int raw)
{
	/*
		It converts it to the corresponding fixed-point value.
	*/
	std::cout << "Int constructor called" << std::endl;
	_raw = raw << _bits;
}

Fixed::Fixed(const float raw)
{
	/*
		It converts it to the corresponding fixed-point value.
	*/
	std::cout << "Float constructor called" << std::endl;
	_raw = roundf(raw * (1 << _bits));
}

// Copy constructor
Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_raw = other.getRawBits();
	return (*this);
}

// Destructor
Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

// Non-special Member Functions
int		Fixed::getRawBits(void) const
{
	return (_raw);
}

void	Fixed::setRawBits(int const raw)
{
	_raw = raw;
}

float	Fixed::toFloat(void) const
{
	//	that converts the fixed-point value to a floating-point value
	return (static_cast<float>(_raw) / (1 << _bits));
}
		
int		Fixed::toInt(void) const
{
	// that converts the fixed-point value to an integer value
	return _raw >> _bits;
}

/*
		Fuction: 
		An overload of the insertion («) operator
		that inserts a floating-point representation of the fixed-point number
		into the output stream object passed as a parameter.

*/
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}
