/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:06:45 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/24 12:57:50 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <bitset>

template<typename T>
static void	printBits(T bits)
{
	std::cout << std::setw(10) << bits << " = " << std::bitset<sizeof(T) * 8>(bits) << std::endl;
}

int	main(void)
{
	// Mandatory tests
	std::cout << std::endl << "\e[1;30;47m  MANDATORY TESTS  \e[0m" << std::endl << std::endl;
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	// Other tests
	std::cout << std::endl << "\e[1;30;47m  OTHER TESTS  \e[0m" << std::endl << std::endl;
	{
		Fixed		a(6.5f);
		Fixed		b(2);
		const Fixed	ca(a), cb(b);
		Fixed		c;
		
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << std::endl;
		std::cout << "a + b = " << a + b << std::endl;
		std::cout << "a - b = " << a - b << std::endl;
		std::cout << "a * b = " << a * b << std::endl;
		std::cout << "a / b = " << a / b << std::endl;
		std::cout << std::endl;
		std::cout << "a < b = " << (a < b) << std::endl;
		std::cout << "a > b = " << (a > b) << std::endl;
		std::cout << "a <= b = " << (a <= b) << std::endl;
		std::cout << "a >= b = " << (a >= b) << std::endl;
		std::cout << "a == b = " << (a == b) << std::endl;
		std::cout << "a != b = " << (a != b) << std::endl;
		std::cout << std::endl;
		c = a;
		std::cout << "c = " << c << std::endl;
		std::cout << "++c = " << ++c << std::endl;
		std::cout << "c++ = " << c++ << std::endl;
		std::cout << "c = " << c << std::endl;
		std::cout << std::endl;
		c = a;
		std::cout << "c = " << c << std::endl;
		std::cout << "--c = " << --c << std::endl;
		std::cout << "c-- = " << c-- << std::endl;
		std::cout << "c = " << c << std::endl;
		std::cout << std::endl;
		std::cout << "Fixed::min(a, b)         = " << Fixed::min(a, b) << std::endl;
		std::cout << "Fixed::min(ca, cb) const = " << Fixed::min(ca, cb) << std::endl;
		std::cout << "Fixed::max(a, b)         = " << Fixed::max(a, b) << std::endl;
		std::cout << "Fixed::max(ca, cb) const = " << Fixed::max(ca, cb) << std::endl;
	}
	return (EXIT_SUCCESS);
}