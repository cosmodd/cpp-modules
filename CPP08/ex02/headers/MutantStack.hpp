/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:08:39 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/15 15:13:37 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <deque>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void): std::stack<T>() {}
		MutantStack(const MutantStack& ref): std::stack<T>(ref) {}
		~MutantStack(void) {}
		MutantStack& operator=(const MutantStack& ref)
		{
			std::stack<T>::operator=(ref); // Call the parent's operator=
			return *this;
		}

		// doing a typedef because we need MutantStack<T>::iterator
		// std::stack<T>::container_type is the container type used by std::stack<T>
		// defaults to std::deque<T>
		typedef typename std::stack<T>::container_type::iterator iterator;

		// Getters
		iterator	begin(void)
		{
			// std::stack<T>::c is the container used by std::stack<T>
			// std::deque<T>::begin() returns an iterator to the first element of the deque
			return this->c.begin();
		}

		iterator	end(void)
		{
			// std::stack<T>::c is the container used by std::stack<T>
			// std::deque<T>::end() returns an iterator to the element following the last element of the deque
			return this->c.end();
		}
};
