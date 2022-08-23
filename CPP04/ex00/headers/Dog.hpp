/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:17:00 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/10 13:56:42 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(const Dog&);
		~Dog(void);
		Dog& operator=(const Dog&);

		// Getters

		// Setters

		// Methods
		void	makeSound(void) const;
};
