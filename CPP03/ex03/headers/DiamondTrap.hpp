/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:53:41 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/03 11:40:15 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string	_name;

	public:
		DiamondTrap(void);
		DiamondTrap(std::string);
		DiamondTrap(const DiamondTrap&);
		~DiamondTrap(void);
		DiamondTrap& operator=(const DiamondTrap&);

		// Getters
		std::string		getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getAttackDamage(void) const;

		// Setters
		void	setName(std::string);

		// Methods
		void	whoAmI(void) const;
		void	attack(const std::string &target);
};

#endif
