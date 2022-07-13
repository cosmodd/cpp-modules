/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:42:55 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/13 13:32:33 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Fixed.hpp"

int main( void ) {
	int		fpNumber = 4;
	Fixed	fixedPoints[fpNumber];

	fixedPoints[0] = 5;
	fixedPoints[1] = Fixed(1.2f);
	fixedPoints[2] = 1.7f;
	fixedPoints[3] = 1.5f;

	std::cout << "====  FIXED  ====" << std::endl;
	for (int i = 0; i < fpNumber; i++)
	{
		std::cout << "fixedPoints[" << i << "] => " << fixedPoints[i] << std::endl;
	}
	std::cout << "====  FLOAT  ====" << std::endl;
	for (int i = 0; i < fpNumber; i++)
	{
		std::cout << "fixedPoints[" << i << "] => " << fixedPoints[i].toFloat() << std::endl;
	}
	std::cout << "==== INTEGER ====" << std::endl;
	for (int i = 0; i < fpNumber; i++)
	{
		std::cout << "fixedPoints[" << i << "] => " << fixedPoints[i].toInt() << std::endl;
	}
}
