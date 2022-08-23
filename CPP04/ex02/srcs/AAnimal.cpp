/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:10:54 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/22 12:04:24 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void):
	type("Animal")
{
	std::cout << "\e[1;37;44m 🐾 AAnimal constructor called \e[0m" << std::endl;
}

AAnimal::AAnimal(const AAnimal& ref)
{
	this->type = ref.type;
	std::cout << "\e[1;37;43m 🐾 AAnimal copy constructor called \e[0m" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "\e[1;37;41m 🐾 AAnimal destructor called \e[0m" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& ref)
{
	this->type = ref.type;
	return *this;
}

// Getters
std::string	AAnimal::getType(void) const
{
	return this->type;
}

// Setters
void	AAnimal::setType(std::string type)
{
	this->type = type;
}

// Methods
