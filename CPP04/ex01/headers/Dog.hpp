/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:17:00 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/22 10:24:19 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain*	_brain;

	public:
		Dog(void);
		Dog(const Dog&);
		~Dog(void);
		Dog& operator=(const Dog&);

		// Getters
		Brain&	getBrain(void) const;

		// Setters

		// Methods
		void	makeSound(void) const;
};
