/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:43:50 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/22 12:58:46 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Harl
{
	private:
		std::string	_levels[4];
		void		(Harl::*_pointers[4])(void);
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);

	public:
		Harl(void);
		Harl(const Harl&);
		~Harl(void);
		Harl& operator=(const Harl&);

		// Getters

		// Setters

		// Methods
		void	complain(std::string);
		void	filter(std::string);

};
