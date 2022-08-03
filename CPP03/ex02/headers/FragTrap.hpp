/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:37:44 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/03 09:45:08 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap&);
		~FragTrap(void);
		FragTrap& operator=(const FragTrap&);

		// Getters

		// Setters

		// Methods
		void	highFivesGuys(void) const;

};

#endif
