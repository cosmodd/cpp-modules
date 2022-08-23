/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:45:19 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/10 13:53:41 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat&);
		~WrongCat(void);
		WrongCat& operator=(const WrongCat&);

		// Getters

		// Setters

		// Methods
		void	makeSound(void) const;

};
