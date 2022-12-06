/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:17:00 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 13:18:23 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):
	Form("PresidentialPardonForm", 25, 5),
	_target(target)
{
	std::cout << "\e[1;37;44m 🙏 PresidentialPardonForm default constructor called \e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref):
	Form(ref),
	_target(ref._target)
{
	std::cout << "\e[1;37;43m 🙏 PresidentialPardonForm copy constructor called \e[0m" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "\e[1;37;41m 🙏 PresidentialPardonForm destructor called \e[0m" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	Form::operator=(ref);
	this->_target = ref._target;
	return *this;
}

// Getters

// Setters

// Methods
void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
