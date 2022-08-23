/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:08:16 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/22 11:54:51 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
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
