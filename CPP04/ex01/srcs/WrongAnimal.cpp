/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:42:40 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/22 11:58:20 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void):
	type("WrongAnimal")
{
	std::cout << "\e[1;37;44m ❌ WrongAnimal constructor called \e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref):
	type(ref.type)
{
	std::cout << "\e[1;37;43m ❌ WrongAnimal copy constructor called \e[0m" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\e[1;37;41m ❌ WrongAnimal destructor called \e[0m" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref)
{
	this->type = ref.type;
	return *this;
}

// Getters
std::string WrongAnimal::getType(void) const
{
	return this->type;
}

// Setters
void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

// Methods
void WrongAnimal::makeSound(void) const
{
	std::cout << "\e[1;37;43m ❌ " << this->getType() << " \e[0m I'm a wrong animal !" << std::endl;
}
