/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:12:42 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/15 10:56:25 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

template <typename T>
int	easyfind(const T& container, int toFind)
{
	typename T::const_iterator	it = std::find(container.begin(), container.end(), toFind);

	if (it == container.end())
		return (-1);
	return (std::distance(container.begin(), it));
}
