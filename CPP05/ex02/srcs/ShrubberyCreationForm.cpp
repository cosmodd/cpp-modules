/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:13:33 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 13:27:40 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):
	Form("ShrubberyCreationForm", 145, 137),
	_target(target)
{
	std::cout << "\e[1;37;44m 🌲 ShrubberyCreationForm constructor called \e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref):
	Form(ref),
	_target(ref._target)
{
	std::cout << "\e[1;37;43m 🌲 ShrubberyCreationForm copy constructor called \e[0m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "\e[1;37;41m 🌲 ShrubberyCreationForm destructor called \e[0m" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{
	Form::operator=(ref);
	this->_target = ref._target;
	return *this;
}

// Getters

// Setters

// Methods
void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);

	std::ofstream file(this->_target + "_shrubbery");

	if (!file.is_open())
		throw ShrubberyCreationForm::FileCreationException();

	file << "              ,@@@@@@@," << std::endl;
	file << "      ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	file << "   ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	file << "  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	file << "  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	file << "  %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	file << "  `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	file << "      |o|        | |         | |" << std::endl;
	file << "      |.|        | |         | |" << std::endl;
	file << "  \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;

	file.close();
}

// Exceptions
const char*	ShrubberyCreationForm::FileCreationException::what() const throw ()
{
	return "🌲 ShrubberyCreationForm: File creation failed";
}
