/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:44:16 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/23 10:10:16 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		Ice(const Ice&);
		~Ice(void);
		Ice& operator=(const Ice&);

		// Getters

		// Setters

		// Methods
		Ice*	clone(void) const;
		void	use(ICharacter& target);
};
