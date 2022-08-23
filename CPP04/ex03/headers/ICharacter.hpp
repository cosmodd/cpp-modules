/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:34:32 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/23 12:04:08 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

// Avoids circular dependency between AMateria and ICharacter
// resulted in AMateria being an undefined symbol in ICharacter
class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};
