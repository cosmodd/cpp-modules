/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:56:56 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/03 12:17:38 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	ClapTrap::setName("ClapTrap_clap_name");
	this->_name = "DiamondTrap";
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::setName(name + "_clap_name");
	this->setName(name);
	std::cout << "\e[1;37;44m 🤖 DiamondTrap " << this->_name << " has been constructed ! \e[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ref)
{
	this->setName(ref.getName());
	this->setHitPoints(ref.FragTrap::getHitPoints());
	this->setEnergyPoints(ref.ScavTrap::getEnergyPoints());
	this->setAttackDamage(ref.FragTrap::getAttackDamage());
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\e[1;37;41m 🤖 DiamondTrap " << this->_name << " has been destructed ! \e[0m" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ref)
{
	this->setName(ref.getName());
	this->setHitPoints(ref.FragTrap::getHitPoints());
	this->setEnergyPoints(ref.ScavTrap::getEnergyPoints());
	this->setAttackDamage(ref.FragTrap::getAttackDamage());
	return *this;
}

// Getters
std::string	DiamondTrap::getName(void) const
{
	return this->_name;
}

unsigned int	DiamondTrap::getHitPoints(void) const
{
	return FragTrap::getHitPoints();
}

unsigned int	DiamondTrap::getEnergyPoints(void) const
{
	return ScavTrap::getEnergyPoints();
}

unsigned int	DiamondTrap::getAttackDamage(void) const
{
	return FragTrap::getAttackDamage();
}

// Setters
void	DiamondTrap::setName(std::string name)
{
	this->_name = name;
}

// Methods

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "\e[1;37;43m DiamondTrap \e[0m My name is \e[1;3;4m" << this->getName() << "\e[0m and my ClapTrap name is \e[1;3;4m" << ClapTrap::getName() << "\e[0m 🤖" << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
