/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:26:49 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/15 13:28:54 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <algorithm>

class Span
{
	private:
		int*			_array;
		unsigned int	_size;
		unsigned int	_count;

	public:
		Span(void);
		Span(unsigned int size);
		Span(const Span&);
		~Span(void);
		Span& operator=(const Span&);

		// Getters
		int*	begin(void) const;
		int*	end(void) const;

		// Setters

		// Methods
		void	addNumber(int);
		void	addNumbers(int*, int*);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		// Exceptions
		class FullException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const Span& ref);
