/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:29:06 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/21 15:21:54 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	// Test of the function: Zombie *zombieHorde(int n, std::string name);
	{
		int	numberOfZombies = 20;
		Zombie	*zombies =  zombieHorde(numberOfZombies, "MOUETTE");

		for (int i = 0; i < numberOfZombies; i++)
			zombies->announce();

		delete[] zombies;
	}
	return (EXIT_SUCCESS);
}
