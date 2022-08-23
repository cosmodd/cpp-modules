/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:17:35 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/22 11:57:58 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "\e[1;37;44m 🐶 Dog constructor called \e[0m" << std::endl;
}

Dog::Dog(const Dog& ref)
{
	this->type = ref.type;
	this->_brain = new Brain(*ref._brain);
	std::cout << "\e[1;37;43m 🐶 Dog copy constructor called \e[0m" << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "\e[1;37;41m 🐶 Dog destructor called \e[0m" << std::endl;
}

Dog& Dog::operator=(const Dog& ref)
{
	this->type = ref.type;
	return *this;
}

// Getters
Brain&	Dog::getBrain(void) const
{
	return *this->_brain;
}

// Setters

// Methods
void	Dog::makeSound(void) const
{
	std::cout << "\e[1;37;43m 🐶 " << this->getType() << " \e[0m Woof woof !" << std::endl;
}
