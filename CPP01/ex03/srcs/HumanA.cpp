/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:38:56 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/22 10:24:26 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):
	_name(name),
	_weapon(weapon)
{
	std::cout << "\e[1;37;44m 👤 HumanA constructor called \e[0m" << std::endl;
}

HumanA::HumanA(const HumanA& ref):
	_name(ref._name),
	_weapon(ref._weapon)
{
	std::cout << "\e[1;37;43m 👤 HumanA copy constructor called \e[0m" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "\e[1;37;41m 👤 HumanA destructor called \e[0m" << std::endl;
}

HumanA& HumanA::operator=(const HumanA& ref)
{
	this->_name = ref._name;
	this->_weapon = ref._weapon;
	return *this;
}

// Getters

// Setters

// Methods
void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
