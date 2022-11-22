/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:30:01 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/22 10:29:38 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(void);
		Weapon(std::string name);
		Weapon(const Weapon&);
		~Weapon(void);
		Weapon& operator=(const Weapon&);

		// Getters
		const std::string& getType(void) const;

		// Setters
		void	setType(const std::string&);

		// Methods

};
