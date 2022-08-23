/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:44:16 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/23 11:24:08 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(const Cure&);
		~Cure(void);
		Cure& operator=(const Cure&);

		// Getters

		// Setters

		// Methods
		Cure*	clone(void) const;
		void	use(ICharacter& target);
};
