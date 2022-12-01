/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:51:32 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/30 10:56:39 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void):
	ClapTrap("FragTrap")
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "\e[1;37;44m 🤖 FragTrap default constructor called \e[0m" << std::endl;
}

FragTrap::FragTrap(std::string const &name):
	ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "\e[1;37;44m 🤖 FragTrap constructor called \e[0m" << std::endl;
}

FragTrap::FragTrap(FragTrap const &ref):
	ClapTrap(ref)
{
	std::cout << "\e[1;37;44m 🤖 FragTrap copy constructor called \e[0m" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\e[1;37;41m 🤖 FragTrap destructor called \e[0m" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &ref)
{
	this->_name = ref._name;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
	std::cout << "\e[1;37;44m 🤖 FragTrap copy assignment operator called \e[0m" << std::endl;
	return *this;
}

// Getters

// Setters

// Methods
void	FragTrap::attack(std::string const &target)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "\e[1;37;41m 🤖 FragTrap " << this->_name << " is dead, it can't attack \e[0m" << std::endl;
		return ;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "\e[1;37;41m 🤖 FragTrap " << this->_name << " is out of energy, it can't attack \e[0m" << std::endl;
		return ;
	}
	this->_energyPoints -= 1;
	std::cout << "\e[1;37;44m 🤖 FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! \e[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "\e[1;37;44m 🤖 FragTrap " << this->_name << " gives high fives to everyone! \e[0m" << std::endl;
}