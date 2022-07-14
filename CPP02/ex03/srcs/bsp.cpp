/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:51:32 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/14 12:09:26 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	idkhowtonameit(const Point a, const Point b, const Point p)
{
	return (p.getX() - a.getX()) * (b.getY() - a.getY()) - (p.getY() - a.getY()) * (b.getX() - a.getX());
}

bool	bsp(const Point a, const Point b, const Point c, const Point p)
{
	Fixed	ab = idkhowtonameit(a, b, p);
	Fixed	bc = idkhowtonameit(b, c, p);
	Fixed	ca = idkhowtonameit(c, a, p);
	Fixed	zero = Fixed(0);
	return (ab > zero && bc > zero && ca > zero);
}
