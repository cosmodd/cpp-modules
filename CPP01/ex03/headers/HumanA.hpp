/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:33:20 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/21 15:40:19 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

#include <iostream>
#include <string>

class HumanA
{
	private:
		std::string	_name;
		Weapon&		_weapon;

	public:
		HumanA(std::string name, Weapon& weapon);
		HumanA(const HumanA&);
		~HumanA(void);
		HumanA& operator=(const HumanA&);

		// Getters

		// Setters

		// Methods
		void	attack(void) const;
};
