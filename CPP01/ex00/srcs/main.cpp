/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:54:39 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/21 15:12:14 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	// Test of the function: Zombie *newZombie(std::string name);
	{
		Zombie	*zombies[10];

		for (int i = 0; i < 10; i++)
			zombies[i] = newZombie("Cloporte" + std::to_string(i));

		for (int i = 0; i < 10; i++)
			zombies[i]->announce();

		for (int i = 0; i < 10; i++)
			delete zombies[i];
	}

	// Test of the function: void randomChump(std::string name);
	{
		for (int i = 0; i < 10; i++)
			randomChump("Blurp" + std::to_string(i));
	}

	return (EXIT_SUCCESS);
}
