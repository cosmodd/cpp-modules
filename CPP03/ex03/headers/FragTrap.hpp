/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:49:27 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/30 13:25:29 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string const&);
		FragTrap(FragTrap const&);
		~FragTrap(void);
		FragTrap& operator=(FragTrap const&);

		// Getters

		// Setters

		// Methods
		void	attack(std::string const &target);
		void	highFivesGuys(void) const;
};