/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:50:27 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/13 13:31:05 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed(void):
	_fixedPointValue(0)
{}

Fixed::Fixed(const int value):
	_fixedPointValue(value << Fixed::_fractionalBits)
{}

Fixed::Fixed(const float value):
	_fixedPointValue(roundf(value * (1 << Fixed::_fractionalBits)))
{}

Fixed::Fixed(const Fixed& ref):
	_fixedPointValue(ref.getRawBits())
{}

Fixed::~Fixed(void)
{}

Fixed& Fixed::operator=(const Fixed& ref)
{
	this->_fixedPointValue = ref.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream& os, const Fixed& ref)
{
	os << ref.toFloat();
	return os;
}

// Getters

int	Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

// Setters

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

// Methods

float	Fixed::toFloat(void) const
{
	return (float)this->_fixedPointValue / (1 << Fixed::_fractionalBits);
}

int		Fixed::toInt(void) const
{
	return this->_fixedPointValue >> Fixed::_fractionalBits;
}
