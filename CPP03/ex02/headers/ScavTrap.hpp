/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:20:37 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/30 10:41:54 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string const&);
		ScavTrap(ScavTrap const&);
		~ScavTrap(void);
		ScavTrap& operator=(ScavTrap const&);

		// Getters

		// Setters

		// Methods
		void	attack(std::string const &target);
		void	guardGate(void) const;

};