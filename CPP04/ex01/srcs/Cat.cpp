/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:11:25 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/22 12:01:55 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "\e[1;37;44m 🐱 Cat constructor called \e[0m" << std::endl;
}

Cat::Cat(const Cat& ref)
{;
	this->type = ref.type;
	this->_brain = new Brain(*ref._brain);
	std::cout << "\e[1;37;43m 🐱 Cat copy constructor called \e[0m" << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "\e[1;37;41m 🐱 Cat destructor called \e[0m" << std::endl;
}

Cat& Cat::operator=(const Cat& ref)
{
	this->type = ref.type;
	this->_brain = ref._brain;
	return *this;
}

// Getters
Brain&	Cat::getBrain(void) const
{
	return *this->_brain;
}

// Setters

// Methods
void	Cat::makeSound(void) const
{
	std::cout << "\e[1;37;43m 🐱 " << this->getType() << " \e[0m Meow meow !" << std::endl;
}
