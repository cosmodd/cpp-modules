/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:40:53 by mrattez           #+#    #+#             */
/*   Updated: 2022/09/19 09:31:13 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	{
		std::cout << "◻️◻️◻️◻️ FORMS ◻️◻️◻️◻️" << std::endl;
		Form	high("High", 1, 1);
		Form	medium("Medium", 50, 50);
		Form	low("Low", 150, 150);

		Bureaucrat	b_high("Michel", 1);
		Bureaucrat	b_medium("Dominique", 50);
		Bureaucrat	b_low("Jean", 150);
		
		{
			std::cout << "\e[1;37;45m ---  HIGH  --- \e[0m " << std::endl;
			b_high.signForm(high);
			b_high.signForm(medium);
			b_high.signForm(low);
			
			std::cout << "\e[1;37;45m ---  MEDIUM  --- \e[0m " << std::endl;
			b_medium.signForm(high);
			b_medium.signForm(medium);
			b_medium.signForm(low);
			
			std::cout << "\e[1;37;45m ---  LOW  --- \e[0m " << std::endl;
			b_low.signForm(high);
			b_low.signForm(medium);
			b_low.signForm(low);
		}
	}
	return EXIT_SUCCESS;
}
