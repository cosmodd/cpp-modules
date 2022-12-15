/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:32:14 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/15 15:39:01 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void):
	_array(new int[0]),
	_size(0),
	_count(0)
{}

Span::Span(unsigned int size):
	_array(new int[size]),
	_size(size),
	_count(0)
{}

Span::Span(const Span& ref):
	_array(new int[ref._size]),
	_size(ref._size),
	_count(ref._count)
{
	for (unsigned int i = 0; i < ref._size; i++)
		this->_array[i] = ref._array[i];
}

Span::~Span(void)
{
	delete[] this->_array;
}

Span& Span::operator=(const Span& ref)
{
	this->_count = ref._count;
	if (this->_size != ref._size)
	{
		delete[] this->_array;
		this->_array = new int[ref._size];
		this->_size = ref._size;
	}
	for (unsigned int i = 0; i < ref._size; i++)
		this->_array[i] = ref._array[i];
	return *this;
}

// Getters
int*	Span::begin(void) const
{
	return this->_array;
}

int*	Span::end(void) const
{
	return this->_array + this->_size;
}

// Setters

// Methods
void	Span::addNumber(int n)
{
	if (this->_count == this->_size)
		throw Span::FullException();
	this->_array[this->_count++] = n;
}

void	Span::addNumbers(int* begin, int* end)
{
	if (begin == nullptr || end == nullptr)
		return ;
	while (begin != end)
		this->addNumber(*begin++);
}

int	Span::longestSpan(void) const
{
	int	copy[this->_size];

	std::copy(this->_array, this->_array + this->_size, copy);
	std::sort(copy, copy + this->_size);
	return (std::abs(copy[this->_size - 1] - copy[0]));
}

int	Span::shortestSpan(void) const
{
	int	copy[this->_size];
	int	lowestDiff = -1;

	std::copy(this->_array, this->_array + this->_size, copy);
	std::sort(copy, copy + this->_size);

	for (unsigned int i = 0; i < this->_size - 1; i++)
	{
		int	diff = std::abs(copy[i + 1] - copy[i]);
		if (lowestDiff < 0 || diff <= lowestDiff)
			lowestDiff = diff;
	}
	return (lowestDiff);
}

// Exceptions
const char* Span::FullException::what() const throw()
{
	return "Span is full";
}
