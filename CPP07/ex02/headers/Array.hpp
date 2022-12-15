/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:47:39 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/15 10:07:47 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array(void): _array(new T[0]), _size(0) {};
		Array(unsigned int size): _array(new T[size]), _size(size) {};

		Array(const Array<T>& ref):
			_array(new T[ref._size]),
			_size(ref._size)
		{
			for (unsigned int i = 0; i < ref._size; i++)
				this->_array[i] = ref._array[i];
		};

		~Array(void) { delete[] _array; };

		Array&	operator=(const Array& ref)
		{
			if (this->_size != ref._size)
			{
				delete[] this->_array;
				this->_array = new T[ref._size];
				this->_size = ref._size;
			}
			for (unsigned int i = 0; i < ref._size; i++)
				this->_array[i] = ref._array[i];
			return *this;
		};

		T&	operator[](const unsigned int index) const
		{
			if (index < 0 || index >= this->_size)
				throw (Array::IndexOutOfBoundsException());
			return (this->_array[index]);
		};

		// Getters
		unsigned int	size(void) const
		{
			return this->_size;
		}

		// Setters

		// Methods

		// Exceptions
		class IndexOutOfBoundsException: public std::exception
		{
			public:
				const char*	what() const throw()
				{
					return "Index out of bounds";
				};
		};
};
