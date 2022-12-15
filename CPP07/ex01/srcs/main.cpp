/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:21:49 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/07 11:43:41 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

#include "iter.hpp"

static void	title(const std::string& title)
{
	std::cout << std::endl << "\e[1;30;47m " << title << " \e[0m" << std::endl << std::endl;
}

static void	each(const int& a)
{
	std::cout << "Value = " << a << std::endl;
}

int main( void ) {
	{
		title("Test with array");

		int length = 10;
		int	arr[length];

		for (int i = 0; i < length; i++)
			arr[i] = length - i - 1;

		std::cout << "arr[" << length << "] = { ";
		for (int i = 0; i < length; i++)
		{
			std::cout << arr[i];
			if (i < length - 1)
				std::cout << ", ";
		}
		std::cout << " };" << std::endl;

		iter(arr, length, each);
	}
	{
		title("Test with vector");

		int length = 20;
		std::vector<double>	list;

		for (int i = 0; i < length; i++)
			list.push_back(length - i - 1);

		std::cout << "std::vector<int>[" << length << "] = { ";
		for (int i = 0; i < length; i++)
		{
			std::cout << list[i];
			if (i < length - 1)
				std::cout << ", ";
		}
		std::cout << " };" << std::endl;

		iter(&list.front(), list.size(), each);
	}
	return (EXIT_SUCCESS);
}
