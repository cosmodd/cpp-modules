/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:17:00 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/22 11:54:51 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
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
