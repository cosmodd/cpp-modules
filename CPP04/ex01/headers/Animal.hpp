/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:09:27 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/22 11:42:18 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(const Animal&);
		virtual ~Animal(void);
		Animal& operator=(const Animal&);

		// Getters
		std::string	getType(void) const;

		// Setters
		void	setType(std::string);

		// Methods
		virtual void	makeSound(void) const;
		
};
