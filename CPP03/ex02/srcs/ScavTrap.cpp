/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:01:55 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/14 14:30:28 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):
	ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "\e[1;37;44m 🤖 ScavTrap " << this->name << " has been constructed ! \e[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ref):
	ClapTrap(ref)
{}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\e[1;37;41m 🤖 ScavTrap " << this->name << " has been destructed ! \e[0m" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ref)
{
	this->name = ref.name;
	this->hitPoints = ref.hitPoints;
	this->energyPoints = ref.energyPoints;
	this->attackDamage = ref.attackDamage;
	return *this;
}

// Getters

// Setters

// Methods
void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints < 1)
	{
		std::cout << "\e[1;37;45m ScavTrap \e[0m " << this->name << " is dead 💀 and can't attack ⚔️" << std::endl;
		return;
	}
	if (this->energyPoints < 1)
	{
		std::cout << "\e[1;37;45m ScavTrap \e[0m " << this->name << " has no more energy points ⚡️ to attack ⚔️" << std::endl;
		return;
	}
	this->energyPoints--;
	std::cout	<< "\e[1;37;45m ScavTrap \e[0m " << this->name
				<< " attacks " << target
				<< ", causing " << this->attackDamage
				<< " points of damage ⚔️" << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	if (this->hitPoints < 1)
	{
		std::cout << "\e[1;37;45m ScavTrap \e[0m " << this->name << " is dead 💀 and can't go in GateKeeper mode 🛡" << std::endl;
		return;
	}
	std::cout	<< "\e[1;37;45m ScavTrap \e[0m " << this->name
				<< " enters in GateKeeper mode 🛡" << std::endl;
}
