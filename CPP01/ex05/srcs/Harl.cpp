/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:16:38 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/12 10:48:25 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->_levels[0] = "DEBUG";
	this->_levels[1] = "INFO";
	this->_levels[2] = "WARNING";
	this->_levels[3] = "ERROR";
	
	this->_pointers[0] = &Harl::debug;
	this->_pointers[1] = &Harl::info;
	this->_pointers[2] = &Harl::warning;
	this->_pointers[3] = &Harl::error;
}

Harl::Harl(const Harl&)
{}

Harl::~Harl(void)
{}

Harl&	Harl::operator=(const Harl&)
{
	return (*this);
}

// Getters

// Setters

// Methods

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
		if (level == this->_levels[i])
			(this->*_pointers[i])();
}