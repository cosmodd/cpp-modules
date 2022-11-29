/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:04:15 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/24 10:12:30 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):
	_bits(0)
{
	std::cout << "\e[1;37;44m 🔢 Fixed default constructor called \e[0m" << std::endl;
}

Fixed::Fixed(const Fixed& ref):
	_bits(ref._bits)
{
	std::cout << "\e[1;37;44m 🔢 Fixed copy constructor called \e[0m" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "\e[1;37;41m 🔢 Fixed destructor called \e[0m" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& ref)
{
	this->_bits = ref._bits;
	std::cout << "\e[1;37;44m 🔢 Fixed copy assignment operator called \e[0m" << std::endl;
	return *this;
}

// Getters
int	Fixed::getRawBits(void) const
{
	std::cout << "\e[1;37;42m 🔢 Fixed::getRawBits() called \e[0m" << std::endl;
	return this->_bits;
}

// Setters
void	Fixed::setRawBits(const int raw)
{
	std::cout << "\e[1;37;43m 🔢 Fixed::setRawBits() called \e[0m" << std::endl;
	this->_bits = raw;
}

// Methods
