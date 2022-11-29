/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:00:56 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/24 12:42:36 by mrattez          ###   ########.fr       */
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
		Fixed&	operator=(const Fixed&);

		Fixed	operator+(const Fixed&) const;
		Fixed	operator-(const Fixed&) const;
		Fixed	operator*(const Fixed&) const;
		Fixed	operator/(const Fixed&) const;
		
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		bool	operator<(const Fixed&) const;
		bool	operator>(const Fixed&) const;
		bool	operator<=(const Fixed&) const;
		bool	operator>=(const Fixed&) const;
		bool	operator==(const Fixed&) const;
		bool	operator!=(const Fixed&) const;

		// Getters
		int	getRawBits(void) const;

		// Setters
		void	setRawBits(const int raw);

		// Methods
		int		toInt(void) const;
		float	toFloat(void) const;

		static Fixed&		min(Fixed&, Fixed&);
		static const Fixed&	min(const Fixed&, const Fixed&);
		static Fixed&		max(Fixed&, Fixed&);
		static const Fixed&	max(const Fixed&, const Fixed&);

};

std::ostream& operator<<(std::ostream& os, const Fixed& ref);