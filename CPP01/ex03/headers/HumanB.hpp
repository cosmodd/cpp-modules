/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:35:51 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/21 15:45:31 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

#include <iostream>
#include <string>

class HumanB
{
	private:
		std::string	_name;
		Weapon*		_weapon;

	public:
		HumanB(std::string name);
		HumanB(const HumanB&);
		~HumanB(void);
		HumanB& operator=(const HumanB&);

		// Getters

		// Setters
		void	setWeapon(Weapon& weapon);

		// Methods
		void	attack() const;
};
