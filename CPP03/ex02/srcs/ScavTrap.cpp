/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:01:55 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/02 14:09:06 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->setName("ScavTrap");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "\e[1;37;44m 🤖 ScavTrap default construction ! \e[0m" << std::endl;
}


ScavTrap::ScavTrap(std::string name):
	ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "\e[1;37;44m 🤖 ScavTrap " << this->getName() << " has been constructed ! \e[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ref)
{
	this->setName(ref.getName());
	this->setHitPoints(ref.getHitPoints());
	this->setEnergyPoints(ref.getEnergyPoints());
	this->setAttackDamage(ref.getAttackDamage());
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\e[1;37;41m 🤖 ScavTrap " << this->getName() << " has been destructed ! \e[0m" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ref)
{
	this->setName(ref.getName());
	this->setHitPoints(ref.getHitPoints());
	this->setEnergyPoints(ref.getEnergyPoints());
	this->setAttackDamage(ref.getAttackDamage());
	return *this;
}

// Getters

// Setters

// Methods
void	ScavTrap::attack(const std::string& target)
{
	if (this->getHitPoints() < 1)
	{
		std::cout << "\e[1;37;45m ScavTrap \e[0m " << this->getName() << " is dead 💀 and can't attack ⚔️" << std::endl;
		return;
	}
	if (this->getEnergyPoints() < 1)
	{
		std::cout << "\e[1;37;45m ScavTrap \e[0m " << this->getName() << " has no more energy points ⚡️ to attack ⚔️" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout	<< "\e[1;37;45m ScavTrap \e[0m " << this->getName()
				<< " attacks " << target
				<< ", causing " << this->getAttackDamage()
				<< " points of damage ⚔️" << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	if (this->getHitPoints() < 1)
	{
		std::cout << "\e[1;37;45m ScavTrap \e[0m " << this->getName() << " is dead 💀 and can't go in GateKeeper mode 🛡" << std::endl;
		return;
	}
	std::cout	<< "\e[1;37;45m ScavTrap \e[0m " << this->getName()
				<< " enters in GateKeeper mode 🛡" << std::endl;
}
