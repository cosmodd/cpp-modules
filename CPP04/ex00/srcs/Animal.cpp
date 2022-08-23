/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:10:54 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/22 11:59:49 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void):
	type("Animal")
{
	std::cout << "\e[1;37;44m 🐾 Animal constructor called \e[0m" << std::endl;
}

Animal::Animal(const Animal& ref)
{
	this->type = ref.type;
	std::cout << "\e[1;37;43m 🐾 Animal copy constructor called \e[0m" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "\e[1;37;41m 🐾 Animal destructor called \e[0m" << std::endl;
}

Animal& Animal::operator=(const Animal& ref)
{
	this->type = ref.type;
	return *this;
}

// Getters
std::string	Animal::getType(void) const
{
	return this->type;
}

// Setters
void	Animal::setType(std::string type)
{
	this->type = type;
}

// Methods
void	Animal::makeSound(void) const
{
	std::cout << "\e[1;37;43m 🐾 " << this->getType() << " \e[0m I'm an animal !" << std::endl;
}
