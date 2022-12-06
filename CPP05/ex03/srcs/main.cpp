/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:40:53 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 14:02:10 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <ctime>

#include "Form.hpp"
#include "Intern.hpp"

static void	title(std::string title)
{
	std::cout << std::endl;
	std::cout << "\e[1;30;47m " << title << " \e[0m" << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	Intern	someRandomIntern;
	Form*	form;

	{
		title("😓 Intern makes forms");

		form = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << std::endl << *form << std::endl;
		delete form;

		form = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << std::endl << *form << std::endl;
		delete form;

		form = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << std::endl << *form << std::endl;
		delete form;
	}
	{
		title("🤯 Intern makes unknown form");

		form = someRandomIntern.makeForm("unknown form", "Bender");
	}
	return EXIT_SUCCESS;
}
