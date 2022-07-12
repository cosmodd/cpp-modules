/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:16:38 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/12 12:15:00 by mrattez          ###   ########.fr       */
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
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
		if (level == this->_levels[i])
			(this->*_pointers[i])();
}

void	Harl::filter(std::string level)
{
	int	levelIndex = 0;
	
	if (level == "I am not sure how tired I am today...")
		levelIndex = 4;
	for (; levelIndex < 4; levelIndex++)
		if (this->_levels[levelIndex] == level)
			break;
	switch (levelIndex)
	{
		case 0:
			this->debug();
			this->info();
			this->warning();
			this->error();
			break;
		case 1:
			this->info();
			this->warning();
			this->error();
			break;
		case 2:
			this->warning();
			this->error();
			break;
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}