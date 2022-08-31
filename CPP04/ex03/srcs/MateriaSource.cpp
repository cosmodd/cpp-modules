/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:48:06 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/31 10:17:02 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = nullptr;
	std::cout << "\e[1;37;44m ℹ MateriaSource default constructor called \e[0m" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& ref)
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = ref._materias[i];
	std::cout << "\e[1;37;43m ℹ MateriaSource copy constructor called \e[0m" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_materias[i] != nullptr)
			delete this->_materias[i];
	std::cout << "\e[1;37;41m ℹ MateriaSource destructor called \e[0m" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ref)
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = ref._materias[i];
	return *this;
}

// Getters

// Setters

// Methods
void	MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == nullptr)
		{
			this->_materias[i] = materia->clone();
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
		if (this->_materias[i] != nullptr && this->_materias[i]->getType() == type)
			return this->_materias[i]->clone();
	return nullptr;
}
