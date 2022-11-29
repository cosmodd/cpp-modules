/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:00:56 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/24 10:04:02 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		static const int	_fractionalBits = 8;
		int					_bits;

	public:
		Fixed(void);
		Fixed(const Fixed&);
		~Fixed(void);
		Fixed& operator=(const Fixed&);

		// Getters
		int	getRawBits(void) const;

		// Setters
		void	setRawBits(const int raw);

		// Methods

};