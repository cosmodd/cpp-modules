/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:42:55 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/14 09:08:21 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Fixed.hpp"

int main( void ) {
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed		c(b);

	
	std::cout << "\e[93m--- DEFAULT VALUES ---\e[0m" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "\e[93m--- RANDOM TESTS ---\e[0m" << std::endl;
	std::cout << std::setw(4) << "a;" << " \e[90m// " << a << "\e[0m" << std::endl;
	std::cout << std::setw(4) << "++a;" << " \e[90m// " << ++a << "\e[0m" << std::endl;
	std::cout << std::setw(4) << "a;" << " \e[90m// " << a << "\e[0m" << std::endl;
	std::cout << std::setw(4) << "a++;" << " \e[90m// " << a++ << "\e[0m" << std::endl;
	std::cout << std::setw(4) << "a;" << " \e[90m// " << a << "\e[0m" << std::endl;
	std::cout << std::setw(4) << "b;" << " \e[90m// " << b << "\e[0m" << std::endl;
	std::cout << std::setw(4) << "c;" << " \e[90m// " << c << "\e[0m" << std::endl;
	std::cout << std::setw(4) << "--c;" << " \e[90m// " << --c << "\e[0m" << std::endl;
	std::cout << std::setw(4) << "c;" << " \e[90m// " << c << "\e[0m" << std::endl;
	std::cout << std::setw(4) << "c--;" << " \e[90m// " << c-- << "\e[0m" << std::endl;
	std::cout << std::setw(4) << "c;" << " \e[90m// " << c << "\e[0m" << std::endl;
	std::cout << "\e[90m ------------------- \e[0m" << std::endl;
	std::cout << std::setw(4) << "1/4" << " \e[90m// " << (Fixed(1) / Fixed(4)) << "\e[0m" << std::endl;
	std::cout << std::setw(4) << "12/4" << " \e[90m// " << (Fixed(12) / Fixed(4)) << "\e[0m" << std::endl;
	std::cout << std::setw(4) << "1/16" << " \e[90m// " << (Fixed(1) / Fixed(16)) << "\e[0m" << std::endl;
	std::cout << std::setw(4) << "3/4" << " \e[90m// " << (Fixed(3) / Fixed(4)) << "\e[0m" << std::endl;
	
	std::cout << "\e[93m--- VALUES ---\e[0m" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	
	std::cout << "\e[93m--- MIN / MAX (A, B) ---\e[0m" << std::endl;
	std::cout << "CMAX => " << Fixed::max((const Fixed)a,(const Fixed)b) << std::endl;
	std::cout << "CMIN => " << Fixed::min((const Fixed)a,(const Fixed)b) << std::endl;
	std::cout << "MAX  => " << Fixed::max(a,b) << std::endl;
	std::cout << "MIN  => " << Fixed::min(a,b) << std::endl;
	return EXIT_SUCCESS;
}
