/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:54:11 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/14 14:48:16 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int	main(void)
{
	const std::string	target = "DoctorWho";
	FragTrap			ft("DALEK");

	for (int i = 0; i < 100 / 2; i++)
	{
		ft.attack(target);
		ft.beRepaired(1);
		ft.highFiveGuys();
		ft.takeDamage(1);
		ft.beRepaired(2);
	}
	ft.takeDamage(300);
	return EXIT_SUCCESS;
}
