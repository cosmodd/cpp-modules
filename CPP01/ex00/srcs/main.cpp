/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:29:06 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/05 14:54:45 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie* zombie = newZombie("Dimitri");
	zombie->announce();
	delete zombie;

	randomChump("Enzoh");

	// system("leaks brainz");

	return (EXIT_SUCCESS);
}
