/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:09:27 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/22 11:53:50 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
	protected:
		std::string	type;

	public:
		AAnimal(void);
		AAnimal(const AAnimal&);
		virtual ~AAnimal(void);
		AAnimal& operator=(const AAnimal&);

		// Getters
		std::string	getType(void) const;

		// Setters
		void	setType(std::string);

		// Methods
		virtual void	makeSound(void) const = 0;

};
