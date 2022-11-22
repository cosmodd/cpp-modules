/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:31:17 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/22 10:30:49 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void):
	_type("knife")
{
	std::cout << "\e[1;37;44m 🔪 Weapon default constructor called \e[0m" << std::endl;
}

Weapon::Weapon(std::string type):
	_type(type)
{
	std::cout << "\e[1;37;44m 🔪 Weapon constructor called \e[0m" << std::endl;
}

Weapon::Weapon(const Weapon& ref):
	_type(ref._type)
{
	std::cout << "\e[1;37;43m 🔪 Weapon copy constructor called \e[0m" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "\e[1;37;41m 🔪 Weapon destructor called \e[0m" << std::endl;
}

Weapon& Weapon::operator=(const Weapon& ref)
{
	this->_type = ref._type;
	return *this;
}

// Getters
const std::string&	Weapon::getType(void) const
{
	return this->_type;
}

// Setters
void	Weapon::setType(const std::string& type)
{
	this->_type = type;
}

// Methods

