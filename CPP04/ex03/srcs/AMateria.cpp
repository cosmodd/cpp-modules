/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:51:49 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/23 10:58:25 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "\e[1;37;44m 🧱 AMateria default constructor called \e[0m" << std::endl;
}

AMateria::AMateria(const std::string& type):
	type(type)
{
	std::cout << "\e[1;37;44m 🧱 AMateria constructor called \e[0m" << std::endl;
}

AMateria::AMateria(const AMateria& ref)
{
	this->type = ref.getType();
	std::cout << "\e[1;37;43m 🧱 AMateria copy constructor called \e[0m" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "\e[1;37;41m 🧱 AMateria destructor called \e[0m" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& ref)
{
	this->type = ref.getType();
	return *this;
}

// Getters
const std::string& AMateria::getType(void) const
{
	return this->type;
}

// Setters

// Methods
void	AMateria::use(ICharacter& target)
{
	(void) target;
	std::cout << "Needs to be overloaded by child classes" << std::endl;
}
