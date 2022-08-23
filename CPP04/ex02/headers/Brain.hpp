/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:06:03 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/22 09:58:49 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain(void);
		Brain(const Brain&);
		~Brain(void);
		Brain& operator=(const Brain&);

		// Getters
		std::string		getIdea(unsigned int) const;

		// Setters
		void	setIdea(unsigned int, std::string);

		// Methods
};
