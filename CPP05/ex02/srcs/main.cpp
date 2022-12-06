/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:40:53 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 13:21:29 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <ctime>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

static void	title(std::string title)
{
	std::cout << std::endl;
	std::cout << "\e[1;30;47m " << title << " \e[0m" << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	Bureaucrat	bob("Bob", 1);
	Bureaucrat	joe("Joe", 70);
	Bureaucrat	john("John", 150);

	std::srand(std::time(nullptr));

	std::cout << std::endl;
	std::cout << bob << std::endl;
	std::cout << joe << std::endl;
	std::cout << john << std::endl;

	{
		title("🌲 ShrubberyCreationForm");

		ShrubberyCreationForm form("home");
		std::cout << std::endl << form << std::endl;

		try {
			bob.executeForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			john.signForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			joe.signForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			bob.signForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl << form << std::endl;

		try {
			john.executeForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			joe.executeForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			bob.executeForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl << form << std::endl;

	}
	{
		title("🤖 RobotomyRequestForm");

		RobotomyRequestForm form("someone");
		std::cout << std::endl << form << std::endl;

		try {
			bob.executeForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			john.signForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			joe.signForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			bob.signForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl << form << std::endl;

		try {
			john.executeForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			joe.executeForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			bob.executeForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl << form << std::endl;
	}
	{
		title("📝 PresidentialPardonForm");

		PresidentialPardonForm form("someone");
		std::cout << std::endl << form << std::endl;

		try {
			bob.executeForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			john.signForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			joe.signForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			bob.signForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl << form << std::endl;

		try {
			john.executeForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			joe.executeForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			bob.executeForm(form);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl << form << std::endl;
	}
	return EXIT_SUCCESS;
}
