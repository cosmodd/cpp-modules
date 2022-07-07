/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 08:36:36 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/07 08:52:17 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name)
{
	Zombie* zombies = new Zombie[n];
	
	for (int i = 0; i < n; i++)
		zombies[i].setName(name);
	return zombies;
}