/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:54:11 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/30 17:27:13 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int	main(void)
{
	const std::string	target = "DoctorWho";
	DiamondTrap			diamondTrap("DALEK");
	
	{
		std::cout << std::endl << "\e[1;30;47m 💎 Default informations \e[0m" << std::endl << std::endl;
		std::cout << diamondTrap << std::endl;
	}
	{
		std::cout << std::endl << "\e[1;30;47m ⚡️ Draining energy \e[0m" << std::endl << std::endl;

		while (diamondTrap.getEnergyPoints() > 0)
			diamondTrap.attack(target);
	}
	{
		std::cout << std::endl << "\e[1;30;47m 💎 Informations \e[0m" << std::endl << std::endl;
		std::cout << diamondTrap << std::endl;
	}
	{
		std::cout << std::endl << "\e[1;30;47m ⚡️ No energy \e[0m" << std::endl << std::endl;
		diamondTrap.attack(target);
		diamondTrap.beRepaired(0);
	}
	{
		std::cout << std::endl << "\e[1;30;47m 💀 Dead \e[0m" << std::endl << std::endl;
		std::cout << diamondTrap << std::endl;
		diamondTrap.takeDamage(diamondTrap.getHitPoints());
		std::cout << diamondTrap << std::endl;
		diamondTrap.takeDamage(0);
		diamondTrap.beRepaired(0);
		diamondTrap.attack(target);
	}
	{
		std::cout << std::endl << "\e[1;30;47m 💎 Exclusive methods \e[0m" << std::endl << std::endl;
		diamondTrap.whoAmI();
		diamondTrap.highFivesGuys();
		diamondTrap.guardGate();
	}
	
	return EXIT_SUCCESS;
}
