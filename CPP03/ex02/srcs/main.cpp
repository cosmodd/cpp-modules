/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:54:11 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/30 13:04:33 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int	main(void)
{
	const std::string	target = "DoctorWho";
	FragTrap			fragTrap("DALEK");

	{
		std::cout << std::endl << "\e[1;30;47m ⚡️ Draining energy \e[0m" << std::endl << std::endl;
		for (int i = 0; i < 100 / 5; i++)
		{
			fragTrap.attack(target);
			fragTrap.beRepaired(0);
			fragTrap.beRepaired(0);
			fragTrap.beRepaired(0);
			fragTrap.beRepaired(0);
			fragTrap.takeDamage(4);
		}
	}
	{
		std::cout << std::endl << "\e[1;30;47m ⚡️No energy \e[0m" << std::endl << std::endl;
		fragTrap.attack(target);
		fragTrap.beRepaired(20);
	}
	{
		std::cout << std::endl << "\e[1;30;47m ❤️ No health \e[0m" << std::endl << std::endl;
		fragTrap.takeDamage(20);
		fragTrap.attack(target);
		fragTrap.beRepaired(20);
		fragTrap.takeDamage(100);
	}
	{
		std::cout << std::endl << "\e[1;30;47m 🤖 Exclusive methods \e[0m" << std::endl << std::endl;
		fragTrap.highFivesGuys();
	}
	return EXIT_SUCCESS;
}
