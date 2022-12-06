/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:54:11 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/30 10:06:11 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	test("DALEK");

	{
		std::cout << std::endl << "\e[1;30;47m ⚡️ Draining energy \e[0m" << std::endl << std::endl;
		for (int i = 0; i < 5; i++)
		{
			test.attack("DoctorWho");
			test.beRepaired(4);
			test.takeDamage(2);
		}
	}
	{
		std::cout << std::endl << "\e[1;30;47m ⚡️No energy \e[0m" << std::endl << std::endl;
		test.attack("DoctorWho");
		test.beRepaired(20);
	}
	{
		std::cout << std::endl << "\e[1;30;47m ❤️ No health \e[0m" << std::endl << std::endl;
		test.takeDamage(100);
		test.attack("DoctorWho");
		test.beRepaired(20);
		test.takeDamage(100);
	}

	return EXIT_SUCCESS;
}
