/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:26:56 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/23 12:49:53 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void):
	_name("John")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
	std::cout << "\e[1;37;44m 👤 Character default constructor called \e[0m" << std::endl;
}

Character::Character(const std::string& name):
	_name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
	std::cout << "\e[1;37;44m 👤 Character constructor called \e[0m" << std::endl;
}

Character::Character(const Character& ref)
{
	this->_name = ref.getName();
	for (int i = 0; i < 4; i++)
	{
		AMateria*	refMateria = ref._inventory[i];
		if (refMateria == nullptr) continue;
		this->_inventory[i] = refMateria;
	}
	std::cout << "\e[1;37;43m 👤 Character copy constructor called \e[0m" << std::endl;
}

Character::~Character(void)
{
	std::cout << "\e[1;37;41m 👤 Character destructor called \e[0m" << std::endl;
}

Character& Character::operator=(const Character& ref)
{
	this->_name = ref.getName();
	for (int i = 0; i < 4; i++)
	{
		AMateria*	refMateria = ref._inventory[i];
		if (refMateria == nullptr) continue;
		this->_inventory[i] = refMateria;
	}
	return *this;
}

// Getters
const std::string&	Character::getName(void) const
{
	return this->_name;
}

// Setters

// Methods
void	Character::equip(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != nullptr) continue;
		this->_inventory[i] = materia;
		break;
	}
}

void	Character::unequip(int index)
{
	index = std::abs(index);
	AMateria*	materia = this->_inventory[index % 4];

	if (materia == nullptr) return ;
	this->_inventory[index % 4] = nullptr;
}

void	Character::use(int index, ICharacter& target)
{
	index = std::abs(index);
	AMateria*	materia = this->_inventory[index % 4];
	if (materia == nullptr) return ;
	materia->use(target);
}
