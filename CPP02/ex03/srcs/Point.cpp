/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:55:53 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/24 14:26:23 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void):
	_x(0), _y(0)
{}

Point::Point(float x, float y):
	_x(x), _y(y)
{}

Point::Point(const Point& ref):
	_x(ref._x), _y(ref._y)
{}

Point::~Point(void)
{}

Point& Point::operator=(const Point& ref)
{
	(Fixed&)(this->_x) = ref._x;
	(Fixed&)(this->_y) = ref._y;
	return *this;
}

Point	Point::operator+(const Point& ref) const
{
	Point	result;

	(Fixed&)(result._x) = this->_x + ref._x;
	(Fixed&)(result._y) = this->_y + ref._y;
	return result;
}

Point	Point::operator-(const Point& ref) const
{
	Point	result;

	(Fixed&)(result._x) = this->_x - ref._x;
	(Fixed&)(result._y) = this->_y - ref._y;
	return result;
}

std::ostream&	operator<<(std::ostream& os, const Point& ref)
{
	os << "(" << ref.getX() << ", " << ref.getY() << ")";
	return os;
}

// Getters
const Fixed	Point::getX(void) const
{
	return this->_x;
}

const Fixed	Point::getY(void) const
{
	return this->_y;
}

// Setters

// Methods
