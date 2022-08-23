/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:33:28 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/23 10:10:11 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria&);
		virtual ~AMateria(void);
		AMateria& operator=(const AMateria&);

		// Getters
		std::string const & getType(void) const; //Returns the materia type

		// Setters

		// Methods
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};
