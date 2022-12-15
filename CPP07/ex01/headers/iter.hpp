/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:56:29 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/15 09:51:53 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename F>
void	iter(T* table_ptr, int size, F func)
{
	if (table_ptr == NULL || size <= 0)
		return ;
	for (int i = 0; i < size; i++)
		func(table_ptr[i]);
}
