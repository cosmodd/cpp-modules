/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:06:45 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/24 14:45:24 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int	main(void)
{
	const Point	a(0.0f, 0.0f);
	const Point	b(10.0f, 0.0f);
	const Point	c(5.0f, 10.0f);

	const float	scale = 4.0f;

	for (int y = 11 * scale; y >= -1; y--)
	{
		for (int x = -1; x < 11 * scale; x++)
		{
			float	fx = x / scale;
			float	fy = y / scale;
			
			const Point	pt = Point(fx, fy);
			bool		isInside = bsp(a, b, c, pt);
			
			std::cout << (isInside ? "\e[47m  \e[0m" : "\e[40m  \e[0m");
		}
		std::cout << std::endl;
	}

	return (EXIT_SUCCESS);
}