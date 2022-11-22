/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:30:43 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/22 13:10:29 by mrattez          ###   ########.fr       */
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
	std::cout << "\e[1;37;44m 📣 Harl default constructor called \e[0m" << std::endl;
}

Harl::Harl(const Harl& ref)
{
	(void) ref;
	std::cout << "\e[1;37;43m 📣 Harl copy constructor called \e[0m" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "\e[1;37;41m 📣 Harl destructor called \e[0m" << std::endl;
}

Harl& Harl::operator=(const Harl& ref)
{
	(void) ref;
	return *this;
}

// Getters

// Setters

// Methods
void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn\'t put enough bacon in my burger ! If you did, I wouldn\'t be asking for more !" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI\'ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
		if (this->_levels[i] == level)
			(this->*_pointers[i])();
}

void	Harl::filter(std::string level)
{
	int	filterLevel = -1;

	for (int i = 0; i < 4; i++)
	{
		if (this->_levels[i] == level)
		{
			filterLevel = i;
			break;
		}
	}

	switch (filterLevel)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
