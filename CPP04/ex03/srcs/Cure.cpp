/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:41:59 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/23 11:36:36 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void):
	AMateria("cure")
{
	std::cout << "\e[1;37;44m 🧪 Cure default constructor called \e[0m" << std::endl;
}

Cure::Cure(const Cure& ref)
{
	this->type = ref.type;
	std::cout << "\e[1;37;43m 🧪 Cure copy constructor called \e[0m" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "\e[1;37;41m 🧪 Cure destructor called \e[0m" << std::endl;
}

Cure& Cure::operator=(const Cure& ref)
{
	this->type = ref.type;
	return *this;
}

// Getters

// Setters

// Methods
Cure*	Cure::clone(void) const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
