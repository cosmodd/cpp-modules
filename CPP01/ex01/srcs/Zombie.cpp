/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 08:28:58 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/07 08:52:05 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void): _name("")
{}

Zombie::Zombie(std::string name): _name(name)
{}

Zombie::Zombie(const Zombie& rhs)
{
	(void) rhs;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " was killed !" << std::endl;
	return ;
}

Zombie& Zombie::operator=(const Zombie& ref)
{
	this->_name = ref.getName();
	return *this;
}

// Getters

std::string Zombie::getName(void) const
{
	return this->_name;
}

// Setters

void	Zombie::setName(std::string newName)
{
	this->_name = newName;
}

// Methods

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}