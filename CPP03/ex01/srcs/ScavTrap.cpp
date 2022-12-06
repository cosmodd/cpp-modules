/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:22:46 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/30 10:41:50 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):
	ClapTrap("ScavTrap")
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "\e[1;37;44m 🤖 ScavTrap default constructor called \e[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name):
	ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "\e[1;37;44m 🤖 ScavTrap constructor called \e[0m" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &ref):
	ClapTrap(ref)
{
	std::cout << "\e[1;37;44m 🤖 ScavTrap copy constructor called \e[0m" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\e[1;37;41m 🤖 ScavTrap destructor called \e[0m" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &ref)
{
	this->_name = ref._name;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
	std::cout << "\e[1;37;44m 🤖 ScavTrap copy assignment operator called \e[0m" << std::endl;
	return *this;
}

// Getters

// Setters

// Methods
void	ScavTrap::attack(std::string const &target)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "\e[1;37;41m 🤖 ScavTrap " << this->_name << " is dead, it can't attack \e[0m" << std::endl;
		return ;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "\e[1;37;41m 🤖 ScavTrap " << this->_name << " is out of energy, it can't attack \e[0m" << std::endl;
		return ;
	}
	this->_energyPoints -= 1;
	std::cout << "\e[1;37;43m 🤖 ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! \e[0m" << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "\e[1;37;44m 🤖 ScavTrap " << this->_name << " has entered in Gate keeper mode \e[0m" << std::endl;
}