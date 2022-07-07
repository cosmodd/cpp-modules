/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:17:07 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/07 12:02:17 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):
	_name(name),
	_weapon(weapon)
{}

HumanA::HumanA(const HumanA& ref):
	_name(ref._name),
	_weapon(ref._weapon)
{}

HumanA::~HumanA(void)
{}

HumanA& HumanA::operator=(const HumanA& ref)
{
	this->_name = ref._name;
	this->_weapon = ref._weapon;
	return *this;
}

// Getters

// Setters
void	HumanA::setWeapon(Weapon& weapon)
{
	this->_weapon = weapon;
}

// Methods
void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
