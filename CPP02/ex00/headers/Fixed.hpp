/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:43:21 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/12 13:39:25 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		const static int	_fractionalBits;
		int					_fixedPointValue;

	public:
		Fixed(void);
		Fixed(const Fixed&);
		~Fixed(void);
		Fixed& operator=(const Fixed&);

		// Getters
		int	getRawBits(void) const;

		// Setters
		void	setRawBits(int const raw);

		// Methods

};

#endif // FIXED_HPP