/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:44:51 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/14 12:07:26 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <iomanip>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed	_x;
		Fixed	_y;

	public:
		Point(void);
		Point(const float, const float);
		Point(const Point&);
		~Point(void);
		Point& operator=(const Point&);

		// Getters
		Fixed	getX(void) const;
		Fixed	getY(void) const;

		// Setters
		void	setX(const Fixed);
		void	setY(const Fixed);

		// Methods

};

std::ostream&	operator<<(std::ostream&, const Point&);

Fixed	idkhowtonameit(const Point, const Point, const Point);
bool	bsp(const Point, const Point, const Point, const Point);

#endif
