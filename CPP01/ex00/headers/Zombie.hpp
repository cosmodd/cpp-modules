/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:51:03 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/21 15:37:54 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(void);
		Zombie(std::string);
		Zombie(const Zombie&);
		~Zombie(void);
		Zombie& operator=(const Zombie&);

		// Getters

		// Setters

		// Methods
		void	announce(void) const;

};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
