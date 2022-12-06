/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:40:53 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 10:51:28 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

static void	title(std::string title)
{
	std::cout << std::endl;
	std::cout << "\e[1;30;47m " << title << " \e[0m" << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	Bureaucrat*	bureaucrat;
	{
		title("CONSTRUCTOR EXCEPTIONS");

		try {
			Bureaucrat tooHigh("Dimitri", 0);
		} catch (const std::exception& e) {
			std::cout << "\e[1;37;41m ERROR \e[0m " << e.what() << std::endl;
		}

		try {
			Bureaucrat tooLow("Dimitri", 151);
		} catch (const std::exception& e) {
			std::cout << "\e[1;37;41m ERROR \e[0m " << e.what() << std::endl;
		}

		bureaucrat = new Bureaucrat("Dimitri", 50);

		std::cout << "\e[1;37;44m BUREAUCRAT \e[0m " << *bureaucrat << std::endl;

		delete bureaucrat;
	}
	{
		title("METHOD EXCEPTIONS");

		bureaucrat = new Bureaucrat("Michel", 1);

		try {
			bureaucrat->incrementGrade();
		} catch (const std::exception& e) {
			std::cout << "\e[1;37;41m ERROR \e[0m " << e.what() << std::endl;
		}

		try {
			for (int i = 0; i < 152; i++)
			{
				if (i % 20 == 0)
					std::cout << "\e[1;37;44m BUREAUCRAT \e[0m " << *bureaucrat << std::endl;
				bureaucrat->decrementGrade();
			}
		} catch (const std::exception& e) {
			std::cout << "\e[1;37;41m ERROR \e[0m " << e.what() << std::endl;
		}
	}
	{
		title("FORMS");
		Form	high("High Form", 1, 1);
		Form	medium("Medium Form", 50, 50);
		Form	low("Low Form", 150, 150);

		std::cout << std::endl;
		std::cout << high << std::endl;
		std::cout << medium << std::endl;
		std::cout << low << std::endl;

		Bureaucrat	b_high("Michel", 1);
		Bureaucrat	b_medium("Dominique", 50);
		Bureaucrat	b_low("Jean", 150);

		{
			std::cout << std::endl;
			std::cout << "\e[1;37;45m LOW \e[0m " << std::endl;
			std::cout << " "; b_low.signForm(high);
			std::cout << " "; b_low.signForm(medium);
			std::cout << " "; b_low.signForm(low);

			std::cout << "\e[1;37;45m MEDIUM \e[0m " << std::endl;
			std::cout << " "; b_medium.signForm(high);
			std::cout << " "; b_medium.signForm(medium);
			std::cout << " "; b_medium.signForm(low);

			std::cout << "\e[1;37;45m HIGH \e[0m " << std::endl;
			std::cout << " "; b_high.signForm(high);
			std::cout << " "; b_high.signForm(medium);
			std::cout << " "; b_high.signForm(low);
		}

		std::cout << std::endl;
		std::cout << high << std::endl;
		std::cout << medium << std::endl;
		std::cout << low << std::endl;
	}
	return EXIT_SUCCESS;
}
