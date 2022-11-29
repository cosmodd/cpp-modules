/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:52:51 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/24 14:22:36 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

#include <iostream>

class Point
{
	private:
		const Fixed	_x;
		const Fixed _y;

	public:
		Point(void);
		Point(const float, const float);
		Point(const Point&);
		~Point(void);
		Point& operator=(const Point&);

		Point	operator-(const Point&) const;
		Point	operator+(const Point&) const;

		// Getters
		const Fixed	getX(void) const;
		const Fixed	getY(void) const;

		// Setters

		// Methods

};

std::ostream&	operator<<(std::ostream&, const Point&);

bool	bsp(const Point, const Point, const Point, const Point);