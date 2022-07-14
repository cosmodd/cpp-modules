/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:39:45 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/14 14:49:09 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):
	ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "\e[1;37;44m 🤖 FragTrap " << this->name << " has been constructed ! \e[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ref):
	ClapTrap(ref)
{}

FragTrap::~FragTrap(void)
{
	std::cout << "\e[1;37;41m 🤖 FragTrap " << this->name << " has been destructed ! \e[0m" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& ref)
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
void	FragTrap::highFiveGuys(void) const
{
	if (this->hitPoints < 1)
	{
		std::cout << "\e[1;37;46m FragTrap \e[0m " << this->name << " is dead 💀 so can't high five ✋" << std::endl;
		return;
	}
	std::cout << "\e[1;37;46m FragTrap \e[0m " << this->name << " asks for an high five ✋" << std::endl;
}
