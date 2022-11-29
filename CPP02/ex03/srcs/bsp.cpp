/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:03:28 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/24 14:34:19 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static Fixed	crossProduct(const Point v1, const Point v2)
{
	return v1.getX() * v2.getY() - v1.getY() * v2.getX();
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	const Point	ab = b - a;
	const Point	ap = point - a;
	
	const Point	bc = c - b;
	const Point	bp = point - b;
	
	const Point	ca = a - c;
	const Point	cp = point - c;

	const Fixed	zero;

	return crossProduct(ab, ap) > zero
		&& crossProduct(bc, bp) > zero
		&& crossProduct(ca, cp) > zero;
}