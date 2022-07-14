/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:47:40 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/14 10:24:58 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void):
	_x(0),
	_y(0)
{}

Point::Point(const float x, const float y):
	_x(x),
	_y(y)
{}

Point::Point(const Point& ref):
	_x(ref._x),
	_y(ref._y)
{}

Point::~Point(void)
{}

Point& Point::operator=(const Point& ref)
{
	this->_x = ref._x;
	this->_y = ref._y;
	return *this;
}

std::ostream&	operator<<(std::ostream& os, const Point& point)
{
	os << "(" << point.getX() << ", " << point.getY() << ")";
	return os;
}

// Getters

Fixed	Point::getX(void) const
{
	return this->_x;
}

Fixed	Point::getY(void) const
{
	return this->_y;
}

// Setters

void	Point::setX(const Fixed value)
{
	this->_x = value;
}

void	Point::setY(const Fixed value)
{
	this->_y = value;
}

// Methods
