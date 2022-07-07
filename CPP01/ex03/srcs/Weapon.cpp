/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:08:17 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/07 10:26:42 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void): _type("")
{}

Weapon::Weapon(std::string type): _type(type)
{}

Weapon::Weapon(const Weapon& ref)
{
	this->_type = ref._type;
	return;
}

Weapon::~Weapon(void)
{}

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
void	Weapon::setType(std::string type)
{
	this->_type = type;
}

// Methods
