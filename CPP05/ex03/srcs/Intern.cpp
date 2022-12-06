/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:33:25 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 13:57:31 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	_formNames[0] = "robotomy request";
	_formNames[1] = "presidential pardon";
	_formNames[2] = "shrubbery creation";

	_formCreators[0] = &RobotomyRequestForm::newForm;
	_formCreators[1] = &PresidentialPardonForm::newForm;
	_formCreators[2] = &ShrubberyCreationForm::newForm;
	std::cout << "\e[1;37;44m 😓 Intern default constructor called \e[0m" << std::endl;
}

Intern::Intern(const Intern& ref)
{
	(void) ref;
	std::cout << "\e[1;37;43m 😓 Intern copy constructor called \e[0m" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "\e[1;37;41m 😓 Intern destructor called \e[0m" << std::endl;
}

Intern& Intern::operator=(const Intern& ref)
{
	(void) ref;
	return *this;
}

// Getters

// Setters

// Methods
Form*	Intern::makeForm(const std::string& formName, const std::string& target) const
{
	for (int i = 0; i < 3; i++)
		if (formName == _formNames[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return _formCreators[i](target);
		}
	std::cout << "Intern cannot create form " << formName << " because it doesn't exist !" << std::endl;
	return nullptr;
}
