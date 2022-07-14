/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:54:11 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/14 13:40:39 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	test("DALEK");

	for (int i = 0; i < 5; i++)
	{
		test.attack("DoctorWho");
		test.beRepaired(4);
		test.takeDamage(2);
		std::cout << std::endl;
	}

	test.attack("DoctorWho");
	test.beRepaired(20);
	test.takeDamage(100);
	test.attack("DoctorWho");
	test.beRepaired(20);

	return EXIT_SUCCESS;
}
