/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:58:39 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/14 13:42:03 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "\e[1;37;44m 🤖 ClapTrap " << this->_name << " has been constructed ! \e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref):
	_name(ref._name),
	_hitPoints(ref._hitPoints),
	_energyPoints(ref._energyPoints),
	_attackDamage(ref._attackDamage)
{}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\e[1;37;41m 🤖 ClapTrap " << this->_name << " has been destructed ! \e[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ref)
{
	this->_name = ref._name;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
	return *this;
}

// Getters
unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

// Setters

// Methods

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is dead 💀 and can't attack ⚔️" << std::endl;
		return;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " has no more energy points ⚡️ to attack ⚔️" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout	<< "ClapTrap " << this->_name
				<< " attacks " << target
				<< ", causing " << this->_attackDamage
				<< " points of damage ⚔️" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead 💀" << std::endl;
		return;
	}
	unsigned int	minDamage = std::min(amount, this->_hitPoints);
	this->_hitPoints -= minDamage;
	std::cout	<< "ClapTrap " << this->_name
				<< " took " << amount << " points of damage ⚔️";
	if (this->_hitPoints < 1)
		std::cout << " and is now dead 💀";
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is dead 💀 and can't repair itself 🔧" << std::endl;
		return;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " has no more energy points ⚡️ to repair itself 🔧" << std::endl;
		return;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout	<< "ClapTrap " << this->_name
				<< " repaired itself 🔧 for " << amount
				<< " hit points ❤️" << std::endl;
}
