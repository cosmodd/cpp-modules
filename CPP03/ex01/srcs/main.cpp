/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:54:11 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/14 14:28:13 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int	main(void)
{
	const std::string	target = "DoctorWho";
	ScavTrap	st("DALEK");

	for (int i = 0; i < 50 / 2; i++)
	{
		st.attack(target);
		st.beRepaired(10);
		st.beRepaired(10);
		st.takeDamage(10);
	}
	st.guardGate();
	return EXIT_SUCCESS;
}
