/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:41:39 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/07 11:57:58 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):
	_name(name),
	_weapon(NULL)
{}

HumanB::HumanB(const HumanB& ref):
	_name(ref._name),
	_weapon(ref._weapon)
{}

HumanB::~HumanB(void)
{}

HumanB& HumanB::operator=(const HumanB& ref)
{
	this->_name = ref._name;
	this->_weapon = ref._weapon;
	return *this;
}

// Getters

// Setters
void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

// Methods
void	HumanB::attack(void) const
{
	if (this->_weapon == NULL)
	{
		std::cout << this->_name << " doesn't have any weapon to attack with !" << std::endl;
		return;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
