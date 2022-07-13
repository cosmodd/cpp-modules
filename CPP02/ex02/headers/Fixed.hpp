/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:43:21 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/13 14:55:42 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		const static int	_fractionalBits;
		int					_fixedPointValue;

	public:
		Fixed(void);
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed&);
		~Fixed(void);
		Fixed&	operator=(const Fixed&);

		Fixed&	operator+(const Fixed&);
		Fixed&	operator-(const Fixed&);
		Fixed&	operator*(const Fixed&);
		Fixed&	operator/(const Fixed&);

		bool	operator>(const Fixed&);
		bool	operator<(const Fixed&);
		bool	operator>=(const Fixed&);
		bool	operator<=(const Fixed&);
		bool	operator==(const Fixed&);
		bool	operator!=(const Fixed&);

		Fixed&	operator++();		// Prefix  increment operator | ++x
		Fixed	operator++(int);	// Postfix increment operator | x++
		Fixed&	operator--();		// Prefix  decrement operator | --x
		Fixed	operator--(int);	// Postfix decrement operator | x--

		// Getters
		int	getRawBits(void) const;

		// Setters
		void	setRawBits(int const raw);

		// Methods
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed&	min(Fixed&, Fixed&);
		static Fixed&	min(const Fixed&, const Fixed&);
		static Fixed&	max(Fixed&, Fixed&);
		static Fixed&	max(const Fixed&, const Fixed&);


};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif // FIXED_HPP
