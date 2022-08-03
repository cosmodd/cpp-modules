/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:54:11 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/03 12:10:09 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int	main(void)
{
	const std::string	target = "DoctorWho";
	DiamondTrap	dt("DALEK");

	dt.whoAmI();
	std::cout << "HitPoints: " << dt.getHitPoints() << std::endl;
	std::cout << "EnergyPoints: " << dt.getEnergyPoints() << std::endl;
	std::cout << "AttackDamage: " << dt.getAttackDamage() << std::endl;

	dt.guardGate();
	dt.highFivesGuys();
	std::cout << "HitPoints: " << dt.getHitPoints() << std::endl;
	dt.takeDamage(dt.getAttackDamage());
	std::cout << "HitPoints: " << dt.getHitPoints() << std::endl;
	for (int i = 0; i < 50; i++)
	{
		dt.beRepaired(dt.getHitPoints());
	}
	std::cout << "Remaining energy points: " << dt.getEnergyPoints() << std::endl;
	dt.attack(target);
	return EXIT_SUCCESS;
}
