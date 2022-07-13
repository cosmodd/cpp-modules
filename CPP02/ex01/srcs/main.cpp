/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:42:55 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/13 09:24:20 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Fixed.hpp"

int main( void ) {
	Fixed		a;
	Fixed const	b( 10 );
	Fixed const	c( 42.42f );
	Fixed const	d( b );
	Fixed 		e;
	
	a = Fixed( 1234.4321f );
	e.setRawBits(0xFFFFFFFF);
	
	std::cout << "=====  FIXED  =====" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "=====  FLOAT  =====" << std::endl;
	std::cout << "a: " << a.toFloat() << std::endl;
	std::cout << "b: " << b.toFloat() << std::endl;
	std::cout << "c: " << c.toFloat() << std::endl;
	std::cout << "d: " << d.toFloat() << std::endl;
	std::cout << "e: " << e.toFloat() << std::endl;
	std::cout << "===== INTEGER =====" << std::endl;
	std::cout << "a: " << a.toInt() << std::endl;
	std::cout << "b: " << b.toInt() << std::endl;
	std::cout << "c: " << c.toInt() << std::endl;
	std::cout << "d: " << d.toInt() << std::endl;
	std::cout << "e: " << e.toInt() << std::endl;
	return 0;
}