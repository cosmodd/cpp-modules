/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:41:59 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/23 11:02:44 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void):
	AMateria("ice")
{
	std::cout << "\e[1;37;44m ❄️ Ice default constructor called \e[0m" << std::endl;
}

Ice::Ice(const Ice& ref)
{
	this->type = ref.type;
	std::cout << "\e[1;37;43m ❄️ Ice copy constructor called \e[0m" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "\e[1;37;41m ❄️ Ice destructor called \e[0m" << std::endl;
}

Ice& Ice::operator=(const Ice& ref)
{
	this->type = ref.type;
	return *this;
}

// Getters

// Setters

// Methods
Ice*	Ice::clone(void) const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
