/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:55:13 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/21 15:37:43 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void):
	_name("Zorg")
{
	std::cout << "\e[1;37;44m 🧟 Zombie default constructor called \e[0m" << std::endl;
}

Zombie::Zombie(std::string name):
	_name(name)
{
	std::cout << "\e[1;37;44m 🧟 Zombie constructor called \e[0m" << std::endl;
}

Zombie::Zombie(const Zombie& ref):
	_name(ref._name)
{
	std::cout << "\e[1;37;43m 🧟 Zombie copy constructor called \e[0m" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "\e[1;37;41m 🧟 Zombie destructor called \e[0m" << std::endl;
}

Zombie& Zombie::operator=(const Zombie& ref)
{
	this->_name = ref._name;
	return *this;
}

// Getters

// Setters

// Methods
void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
