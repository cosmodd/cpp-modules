/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:54:11 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/30 10:57:11 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int	main(void)
{
	const std::string	target = "DoctorWho";
	ScavTrap			st("DALEK");

	{
		std::cout << std::endl << "\e[1;30;47m ⚡️ Draining energy \e[0m" << std::endl << std::endl;
		for (int i = 0; i < 50 / 5; i++)
		{
			st.attack(target);
			st.beRepaired(0);
			st.beRepaired(0);
			st.beRepaired(0);
			st.beRepaired(0);
			st.takeDamage(2);
		}
	}
	{
		std::cout << std::endl << "\e[1;30;47m ⚡️No energy \e[0m" << std::endl << std::endl;
		st.attack(target);
		st.beRepaired(20);
	}
	{
		std::cout << std::endl << "\e[1;30;47m ❤️ No health \e[0m" << std::endl << std::endl;
		st.takeDamage(100);
		st.attack(target);
		st.beRepaired(20);
		st.takeDamage(100);
	}
	{
		std::cout << std::endl << "\e[1;30;47m 🤖 Exclusive methods \e[0m" << std::endl << std::endl;
		st.guardGate();
	}
	return EXIT_SUCCESS;
}
