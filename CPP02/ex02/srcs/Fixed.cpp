/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:50:27 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/13 16:38:46 by mrattez          ###   ########.fr       */
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

Fixed&	Fixed::operator=(const Fixed& ref)
{
	this->_fixedPointValue = ref.getRawBits();
	return *this;
}

Fixed&	Fixed::operator+(const Fixed& ref)
{
	this->_fixedPointValue += ref.getRawBits();
	return *this;
}

Fixed&	Fixed::operator++()
{
	this->_fixedPointValue++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	++*this;
	return temp;
}

Fixed&	Fixed::operator-(const Fixed& ref)
{
	this->_fixedPointValue -= ref.getRawBits();
	return *this;
}

Fixed&	Fixed::operator--()
{
	this->_fixedPointValue--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	--*this;
	return temp;
}

Fixed&	Fixed::operator*(const Fixed& ref)
{
	this->_fixedPointValue *= ref.getRawBits();
	this->_fixedPointValue /= 1 << Fixed::_fractionalBits;
	return *this;
}

Fixed&	Fixed::operator/(const Fixed& ref)
{
	this->_fixedPointValue *= 1 << Fixed::_fractionalBits;
	this->_fixedPointValue /= ref.getRawBits();
	return *this;
}

bool	Fixed::operator==(const Fixed& ref)
{
	return (this->_fixedPointValue == ref.getRawBits());
}

bool	Fixed::operator!=(const Fixed& ref)
{
	return (this->_fixedPointValue != ref.getRawBits());
}

bool	Fixed::operator<(const Fixed& ref)
{
	return (this->_fixedPointValue < ref.getRawBits());
}

bool	Fixed::operator<=(const Fixed& ref)
{
	return (this->_fixedPointValue <= ref.getRawBits());
}

bool	Fixed::operator>(const Fixed& ref)
{
	return (this->_fixedPointValue > ref.getRawBits());
}

bool	Fixed::operator>=(const Fixed& ref)
{
	return (this->_fixedPointValue >= ref.getRawBits());
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
