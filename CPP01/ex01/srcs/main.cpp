/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:29:06 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/07 08:55:01 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	int		numberOfZombies = 20;
	Zombie* horde = zombieHorde(numberOfZombies, "cloporte");
	
	for (int i = 0; i < numberOfZombies; i++)
	{
		Zombie& zombie = horde[i];
		zombie.announce();
	}

	delete[] horde;
	return (EXIT_SUCCESS);
}
