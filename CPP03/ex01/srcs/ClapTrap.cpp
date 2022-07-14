/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:58:39 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/14 14:25:25 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):
	name(name),
	hitPoints(10),
	energyPoints(10),
	attackDamage(0)
{
	std::cout << "\e[1;37;44m 🤖 ClapTrap " << this->name << " has been constructed ! \e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref):
	name(ref.name),
	hitPoints(ref.hitPoints),
	energyPoints(ref.energyPoints),
	attackDamage(ref.attackDamage)
{}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\e[1;37;41m 🤖 ClapTrap " << this->name << " has been destructed ! \e[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ref)
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

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints < 1)
	{
		std::cout << "\e[1;37;44m ClapTrap \e[0m " << this->name << " is dead 💀 and can't attack ⚔️" << std::endl;
		return;
	}
	if (this->energyPoints < 1)
	{
		std::cout << "\e[1;37;44m ClapTrap \e[0m " << this->name << " has no more energy points ⚡️ to attack ⚔️" << std::endl;
		return;
	}
	this->energyPoints--;
	std::cout	<< "\e[1;37;44m ClapTrap \e[0m " << this->name
				<< " attacks " << target
				<< ", causing " << this->attackDamage
				<< " points of damage ⚔️" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints < 1)
	{
		std::cout << "\e[1;37;44m ClapTrap \e[0m " << this->name << " is already dead 💀" << std::endl;
		return;
	}
	unsigned int	minDamage = std::min(amount, this->hitPoints);
	this->hitPoints -= minDamage;
	std::cout	<< "\e[1;37;44m ClapTrap \e[0m " << this->name
				<< " took " << amount << " points of damage ⚔️";
	if (this->hitPoints < 1)
		std::cout << " and is now dead 💀";
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints < 1)
	{
		std::cout << "\e[1;37;44m ClapTrap \e[0m " << this->name << " is dead 💀 and can't repair itself 🔧" << std::endl;
		return;
	}
	if (this->energyPoints < 1)
	{
		std::cout << "\e[1;37;44m ClapTrap \e[0m " << this->name << " has no more energy points ⚡️ to repair itself 🔧" << std::endl;
		return;
	}
	this->energyPoints--;
	this->hitPoints += amount;
	std::cout	<< "\e[1;37;44m ClapTrap \e[0m " << this->name
				<< " repaired itself 🔧 for " << amount
				<< " hit points ❤️" << std::endl;
}
