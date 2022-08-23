/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:11:25 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/22 12:00:08 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "\e[1;37;44m 🐱 Cat constructor called \e[0m" << std::endl;
}

Cat::Cat(const Cat& ref)
{
	this->type = ref.type;
	std::cout << "\e[1;37;43m 🐱 Cat copy constructor called \e[0m" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "\e[1;37;41m 🐱 Cat destructor called \e[0m" << std::endl;
}

Cat& Cat::operator=(const Cat& ref)
{
	this->type = ref.type;
	return *this;
}

// Methods
void	Cat::makeSound(void) const
{
	std::cout << "\e[1;37;43m 🐱 " << this->getType() << " \e[0m Meow meow !" << std::endl;
}
