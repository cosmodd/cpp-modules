/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:21:49 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/07 10:54:40 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "whatever.hpp"

static void	title(const std::string& title)
{
	std::cout << std::endl << "\e[1;30;47m " << title << " \e[0m" << std::endl << std::endl;
}

int main( void ) {
	{
		title("Integers");

		int	a = 10;
		int	b = 20;

		std::cout << "\e[1;37;44m A: " << a << " \e[0m" << std::endl;
		std::cout << "\e[1;37;44m B: " << b << " \e[0m" << std::endl;

		std::cout << std::endl << "\e[1;30;47m Swapping values \e[0m" << std::endl;
		::swap(a, b);

		std::cout << "\e[1;37;44m A: " << a << " \e[0m" << std::endl;
		std::cout << "\e[1;37;44m B: " << b << " \e[0m" << std::endl;

		std::cout << std::endl << "\e[1;30;47m Min/max \e[0m" << std::endl;

		std::cout << "\e[1;37;44m min(a, b) = " << ::min(a, b) << " \e[0m" << std::endl;
		std::cout << "\e[1;37;44m max(a, b) = " << ::max(a, b) << " \e[0m" << std::endl;
	}

	{
		title("Strings");

		std::string	a = "First string";
		std::string	b = "Second string";

		std::cout << "\e[1;37;44m A: " << a << " \e[0m" << std::endl;
		std::cout << "\e[1;37;44m B: " << b << " \e[0m" << std::endl;

		std::cout << std::endl << "\e[1;30;47m Swapping values \e[0m" << std::endl;
		::swap(a, b);

		std::cout << "\e[1;37;44m A: " << a << " \e[0m" << std::endl;
		std::cout << "\e[1;37;44m B: " << b << " \e[0m" << std::endl;

		std::cout << std::endl << "\e[1;30;47m Min/max \e[0m" << std::endl;

		std::cout << "\e[1;37;44m min(a, b) = " << ::min(a, b) << " \e[0m" << std::endl;
		std::cout << "\e[1;37;44m max(a, b) = " << ::max(a, b) << " \e[0m" << std::endl;
	}
	return (EXIT_SUCCESS);
}
