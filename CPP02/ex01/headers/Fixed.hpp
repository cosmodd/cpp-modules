/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:43:21 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/13 13:31:08 by mrattez          ###   ########.fr       */
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

		// Getters
		int	getRawBits(void) const;

		// Setters
		void	setRawBits(int const raw);

		// Methods
		float	toFloat(void) const;
		int		toInt(void) const;

};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif // FIXED_HPP
