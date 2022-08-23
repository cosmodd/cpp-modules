/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:22:38 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/23 11:21:50 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_inventory[4];

	public:
		Character(void);
		Character(const std::string&);
		Character(const Character&);
		~Character(void);
		Character& operator=(const Character&);

		// Getters
		const std::string&	getName(void) const;

		// Setters

		// Methods
		void	equip(AMateria*);
		void	unequip(int);
		void	use(int, ICharacter&);
};
