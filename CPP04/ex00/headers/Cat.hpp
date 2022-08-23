/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:08:16 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/10 13:56:26 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat&);
		~Cat(void);
		Cat& operator=(const Cat&);

		// Getters

		// Setters

		// Methods
		void	makeSound(void) const;
};
