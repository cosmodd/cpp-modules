/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:22:36 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/07 10:39:51 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	swap(T& a, T& b)
{
	T	temp = a;

	a = b;
	b = temp;
}

template <typename T>
T&		min(T& a, T& b)
{
	if (a <= b)
		return (a);
	return (b);
}

template <typename T>
T&		max(T& a, T& b)
{
	if (a >= b)
		return (a);
	return (b);
}
