/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:06:35 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/07 10:26:15 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <iomanip>

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(void);
		Weapon(std::string type);
		Weapon(const Weapon&);
		~Weapon(void);
		Weapon& operator=(const Weapon&);

		// Getters
		const std::string&	getType(void) const;

		// Setters
		void	setType(std::string type);

		// Methods

};

#endif
