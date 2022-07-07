/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:13:27 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/07 12:01:47 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <iomanip>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon&		_weapon;

	public:
		HumanA(std::string name, Weapon& weapon);
		HumanA(const HumanA&);
		~HumanA(void);
		HumanA& operator=(const HumanA&);

		// Getters

		// Setters
		void	setWeapon(Weapon& weapon);

		// Methods
		void	attack(void) const;
};

#endif
