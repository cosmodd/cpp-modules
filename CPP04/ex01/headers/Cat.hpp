/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:08:16 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/22 10:24:15 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat(void);
		Cat(const Cat&);
		~Cat(void);
		Cat& operator=(const Cat&);

		// Getters
		Brain&	getBrain(void) const;

		// Setters

		// Methods
		void	makeSound(void) const;
};
