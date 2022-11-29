/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:00:56 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/24 11:02:51 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

/**
 * @brief Fixed point number where bits are stored in Q(23.8) pattern
 */
class Fixed
{
	private:
		static const int	_fractionalBits = 8;
		int					_bits;

	public:
		Fixed(void);
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed&);
		~Fixed(void);
		Fixed& operator=(const Fixed&);

		// Getters
		int	getRawBits(void) const;

		// Setters
		void	setRawBits(const int raw);

		// Methods
		int		toInt(void) const;
		float	toFloat(void) const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& ref);