/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:46:09 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/22 11:58:32 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "\e[1;37;44m ❌🐱 WrongCat constructor called \e[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat& ref)
{
	this->type = ref.type;
	std::cout << "\e[1;37;43m ❌🐱 WrongCat copy constructor called \e[0m" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "\e[1;37;41m ❌🐱 WrongCat destructor called \e[0m" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& ref)
{
	this->type = ref.type;
	return *this;
}

// Getters

// Setters

// Methods
void	WrongCat::makeSound(void) const
{
	std::cout << "\e[1;37;43m ❌🐱 " << this->getType() << " \e[0m I'm a wrong cat !" << std::endl;
}
