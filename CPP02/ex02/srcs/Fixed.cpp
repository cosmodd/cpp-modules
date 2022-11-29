/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:04:15 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/24 12:54:54 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):
	_bits(0)
{
}

Fixed::Fixed(const int value):
	_bits(value << _fractionalBits)
{
}

Fixed::Fixed(const float value):
	_bits(std::roundf(value * (1 << _fractionalBits)))
{
}

Fixed::Fixed(const Fixed& ref):
	_bits(ref._bits)
{
}

Fixed::~Fixed(void)
{
}

Fixed& Fixed::operator=(const Fixed& ref)
{
	this->_bits = ref._bits;
	return *this;
}

Fixed	Fixed::operator+(const Fixed& ref) const
{
	Fixed	result;

	result.setRawBits(this->_bits + ref._bits);
	return result;
}

Fixed	Fixed::operator-(const Fixed& ref) const
{
	Fixed	result;

	result.setRawBits(this->_bits - ref._bits);
	return result;
}

Fixed	Fixed::operator*(const Fixed& ref) const
{
	Fixed	result(this->toFloat() * ref.toFloat());
	return result;
}

Fixed	Fixed::operator/(const Fixed& ref) const
{
	Fixed	result(this->toFloat() / ref.toFloat());
	return result;
}

Fixed&	Fixed::operator++()
{
	this->_bits++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	copy(*this);
	this->_bits++;
	return copy;
}

Fixed&	Fixed::operator--()
{
	this->_bits--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	copy(*this);
	this->_bits--;
	return copy;
}

bool	Fixed::operator<(const Fixed& ref) const { return this->_bits < ref._bits; }
bool	Fixed::operator>(const Fixed& ref) const { return this->_bits > ref._bits; }
bool	Fixed::operator<=(const Fixed& ref) const { return this->_bits <= ref._bits; }
bool	Fixed::operator>=(const Fixed& ref) const { return this->_bits >= ref._bits; }
bool	Fixed::operator==(const Fixed& ref) const { return this->_bits == ref._bits; }
bool	Fixed::operator!=(const Fixed& ref) const { return this->_bits != ref._bits; }

// Getters
int	Fixed::getRawBits(void) const
{
	return this->_bits;
}

// Setters
void	Fixed::setRawBits(const int raw)
{
	this->_bits = raw;
}

// Methods
int	Fixed::toInt(void) const
{
	return this->_bits >> this->_fractionalBits;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_bits / (1 << this->_fractionalBits);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a <= b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a >= b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a >= b)
		return (a);
	return (b);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& ref)
{
	os << ref.toFloat();
	return os;
}