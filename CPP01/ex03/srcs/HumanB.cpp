/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:41:33 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/22 12:39:26 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):
	_name(name),
	_weapon(nullptr)
{
	std::cout << "\e[1;37;44m 👤 HumanB constructor called \e[0m" << std::endl;
}

HumanB::HumanB(const HumanB& ref):
	_name(ref._name),
	_weapon(ref._weapon)
{
	std::cout << "\e[1;37;43m 👤 HumanB copy constructor called \e[0m" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "\e[1;37;41m 👤 HumanB destructor called \e[0m" << std::endl;
}

HumanB& HumanB::operator=(const HumanB& ref)
{
	this->_name = ref._name;
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
	if (this->_weapon == nullptr)
	{
		std::cout << this->_name << " tried to attack with nothing !" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
