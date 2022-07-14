/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:42:55 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/14 12:09:35 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	// Other
	const std::string	yes = "\e[1;37;42m ✓ \e[0m";
	const std::string	no = "\e[1;37;41m 𐄂 \e[0m";

	// Triangle
	const Point	a(0, 4);
	const Point	b(4, 0);
	const Point	c(-4, -5);

	// Points to check
	const Point	d(0, 0);
	const Point	e(1.9f, 1.9f);
	const Point f(2, 2);
	const Point g(3, 3);

	std::cout << "\e[1;37;104m  TRIANGLE POINTS  \e[0m" << std::endl;
	std::cout << "    A" << a << std::endl;
	std::cout << "    B" << b << std::endl;
	std::cout << "    C" << c << std::endl;
	std::cout << "\e[1;37;104m  CHECKS           \e[0m" << std::endl;
	std::cout << (bsp(a, b, c, d) ? yes : no) << " D" << d << std::endl;
	std::cout << (bsp(a, b, c, e) ? yes : no) << " E" << e << std::endl;
	std::cout << (bsp(a, b, c, f) ? yes : no) << " F" << f << std::endl;
	std::cout << (bsp(a, b, c, g) ? yes : no) << " G" << g << std::endl;
	return EXIT_SUCCESS;
}
