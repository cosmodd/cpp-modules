/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:08:02 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 13:10:59 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):
	Form("RobotomyRequestForm", 72, 45),
	_target(target)
{
	std::cout << "\e[1;37;44m 🤖 RobotomyRequestForm default constructor called \e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref):
	Form(ref),
	_target(ref._target)
{
	std::cout << "\e[1;37;43m 🤖 RobotomyRequestForm copy constructor called \e[0m" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "\e[1;37;41m 🤖 RobotomyRequestForm destructor called \e[0m" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	Form::operator=(ref);
	this->_target = ref._target;
	return *this;
}

// Getters

// Setters

// Methods
static int	randomInt(int min, int max)
{
	return (rand() % (max - min + 1) + min);
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	int	drillSoundsAmount = randomInt(1, 5);

	Form::execute(executor);
	for (int i = 0; i < drillSoundsAmount; i++)
		std::cout << "* drill sounds *" << std::endl;

	if (randomInt(0, 1))
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Robotomization failed" << std::endl;
}
