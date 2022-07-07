/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:38:48 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/07 11:52:20 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <iomanip>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon*		_weapon;

	public:
		HumanB(std::string);
		HumanB(const HumanB&);
		~HumanB(void);
		HumanB& operator=(const HumanB&);

		// Getters

		// Setters
		void	setWeapon(Weapon& weapon);

		// Methods
		void	attack(void) const;

};

#endif
