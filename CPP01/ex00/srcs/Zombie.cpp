/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:31:49 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/05 14:44:48 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name):
	_name(name)
{}

Zombie::Zombie(const Zombie& rhs)
{
	/* copy constructor */
	(void) rhs;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " was killed !" << std::endl;
	return;
}

Zombie& Zombie::operator=(const Zombie& rhs)
{
	this->_name = rhs._name;
	return *this;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
