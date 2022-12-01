/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 09:39:19 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/30 10:32:32 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):
	_name("ClapTrap"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "\e[1;37;44m 🤖 ClapTrap default constructor called \e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string const& name):
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "\e[1;37;44m 🤖 ClapTrap named constructor called \e[0m" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ref):
	_name(ref._name),
	_hitPoints(ref._hitPoints),
	_energyPoints(ref._energyPoints),
	_attackDamage(ref._attackDamage)
{
	std::cout << "\e[1;37;44m 🤖 ClapTrap copy constructor called \e[0m" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\e[1;37;41m 🤖 ClapTrap destructor called \e[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &ref)
{
	this->_name = ref._name;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
	std::cout << "\e[1;37;44m 🤖 ClapTrap copy assignment operator called \e[0m" << std::endl;
	return *this;
}

// Getters

// Setters

// Methods
void	ClapTrap::attack(std::string const &target)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "\e[1;37;41m 🤖 ClapTrap " << this->_name << " is dead, it can't attack \e[0m" << std::endl;
		return;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "\e[1;37;41m 🤖 ClapTrap " << this->_name << " is out of energy, it can't attack \e[0m" << std::endl;
		return;
	}
	this->_energyPoints -= 1;
	std::cout << "\e[1;37;42m 🤖 ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! \e[0m" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "\e[1;37;41m 🤖 ClapTrap " << this->_name << " is already dead! \e[0m" << std::endl;
		return;
	}
	this->_hitPoints -= std::min(amount, this->_hitPoints);
	std::cout << "\e[1;37;43m 🤖 ClapTrap " << this->_name << " takes " << amount << " points of damage! \e[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "\e[1;37;41m 🤖 ClapTrap " << this->_name << " is dead, it can't be repaired \e[0m" << std::endl;
		return;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "\e[1;37;41m 🤖 ClapTrap " << this->_name << " is out of energy, it can't be repaired \e[0m" << std::endl;
		return;
	}
	this->_hitPoints += std::min(amount, this->_hitPoints);
	this->_energyPoints -= 1;
	std::cout << "\e[1;37;44m 🤖 ClapTrap " << this->_name << " is repaired for " << amount << " points! \e[0m" << std::endl;
}