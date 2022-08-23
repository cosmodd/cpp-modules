/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:09:42 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/10 14:14:13 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "\e[1;37;44m 🧠 Brain constructor called \e[0m" << std::endl;
}

Brain::Brain(const Brain& ref)
{
	for (unsigned int i = 0; i < 100; i++) this->ideas[i] = ref.ideas[i];
	std::cout << "\e[1;37;43m 🧠 Brain copy constructor called \e[0m" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "\e[1;37;41m 🧠 Brain destructor called \e[0m" << std::endl;
}

Brain& Brain::operator=(const Brain& ref)
{
	for (unsigned int i = 0; i < 100; i++) this->ideas[i] = ref.ideas[i];
	return *this;
}

// Getters
std::string	Brain::getIdea(unsigned int n) const
{
	return this->ideas[n % 100];
}

// Setters
void Brain::setIdea(unsigned int n, std::string idea)
{
	this->ideas[n % 100] = idea;
}
