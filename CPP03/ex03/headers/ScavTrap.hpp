/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:49:44 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/03 09:48:29 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	private:

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap&);
		~ScavTrap(void);
		ScavTrap& operator=(const ScavTrap&);

		// Getters

		// Setters

		// Methods
		void	attack(const std::string& target);
		void	guardGate(void) const;

};

#endif
