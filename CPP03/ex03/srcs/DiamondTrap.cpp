/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:42:26 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/30 14:21:42 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void):
	ClapTrap("DiamondTrap_clap_name"),
	_name("DiamondTrap")
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "\e[1;37;44m 💎 DiamondTrap default constructor called \e[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name):
	ClapTrap(name + "_clap_name"),
	_name(name)
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "\e[1;37;44m 💎 DiamondTrap constructor called \e[0m" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &ref):
	ClapTrap(ref._name + "_clap_name"),
	_name(ref._name)
{
	std::cout << "\e[1;37;44m 💎 DiamondTrap copy constructor called \e[0m" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\e[1;37;41m 💎 DiamondTrap destructor called \e[0m" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &ref)
{
	this->_name = ref._name;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
	std::cout << "\e[1;37;44m 💎 DiamondTrap copy assignment operator called \e[0m" << std::endl;
	return *this;
}

std::ostream & operator<<(std::ostream &os, DiamondTrap const &ref)
{
	os << "\e[1;37;44m 💎 DiamondTrap " << ref.getName() << " \e[0m";
	os << "\e[1;37;41m 💖 " << ref.getHitPoints() << " \e[0m";
	os << "\e[1;37;42m 💧 " << ref.getEnergyPoints() << " \e[0m";
	os << "\e[1;37;43m 💥 " << ref.getAttackDamage() << " \e[0m";
	return os;
}

// Getters
std::string	DiamondTrap::getName(void) const
{
	return this->_name;
}

unsigned int	DiamondTrap::getHitPoints(void) const
{
	return this->_hitPoints;
}

unsigned int	DiamondTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

unsigned int	DiamondTrap::getAttackDamage(void) const
{
	return this->_attackDamage;
}

// Setters

// Methods
void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "\e[1;37;44m 💎 DiamondTrap name: " << this->_name << " \e[0m" << std::endl;
	std::cout << "\e[1;37;44m 💎 ClapTrap name: " << this->ClapTrap::_name << " \e[0m" << std::endl;
}
