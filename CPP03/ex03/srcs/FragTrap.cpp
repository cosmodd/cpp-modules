/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:39:45 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/03 09:46:15 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->setName("FragTrap");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "\e[1;37;44m 🤖 FragTrap default construction ! \e[0m" << std::endl;
}

FragTrap::FragTrap(std::string name):
	ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "\e[1;37;44m 🤖 FragTrap " << this->getName() << " has been constructed ! \e[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ref):
	ClapTrap(ref)
{}

FragTrap::~FragTrap(void)
{
	std::cout << "\e[1;37;41m 🤖 FragTrap " << this->getName() << " has been destructed ! \e[0m" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& ref)
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
void	FragTrap::highFivesGuys(void) const
{
	if (this->getHitPoints() < 1)
	{
		std::cout << "\e[1;37;46m FragTrap \e[0m " << this->getName() << " is dead 💀 so can't high five ✋" << std::endl;
		return;
	}
	std::cout << "\e[1;37;46m FragTrap \e[0m " << this->getName() << " asks for an high five ✋" << std::endl;
}
