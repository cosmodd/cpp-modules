/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:41:30 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/10 13:54:44 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal&);
		virtual ~WrongAnimal(void);
		WrongAnimal& operator=(const WrongAnimal&);

		// Getters
		std::string	getType(void) const;

		// Setters
		void	setType(std::string);

		// Methods
		void	makeSound(void) const;
};
