/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:40:53 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/31 13:44:24 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat*	bureaucrat;
	{
		std::cout << "◻️◻️◻️◻️ CONSTRUCTOR EXCEPTIONS ◻️◻️◻️◻️" << std::endl;

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
	std::cout << std::endl;
	{
		std::cout << "◻️◻️◻️◻️ METHOD EXCEPTIONS ◻️◻️◻️◻️" << std::endl;

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

	return EXIT_SUCCESS;
}
