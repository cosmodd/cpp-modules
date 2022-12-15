/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:24:06 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/15 15:35:50 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <numeric>
#include "Span.hpp"

static void	title(const std::string& title)
{
	std::cout << std::endl << "\e[1;30;47m " << title << " \e[0m" << std::endl << std::endl;
}

template <typename InputIt>
static void	printArray(InputIt first, InputIt last, int max = 0)
{
	std::cout << "[" << std::distance(first, last) << "]{ ";
	for (InputIt it = first; it != last; it++)
	{
		if (it != first)
			std::cout << ", ";
		std::cout << *it;
		if (max > 0 && std::distance(first, it) >= max)
		{
			std::cout << ", ..., " << *(last - 1);
			break;
		}
	}
	std::cout << " }" << std::endl;
}

int	main(void)
{
	int	huge[10000];

	std::iota(huge, huge + 10000, 0);
	{
		title("Span fullness");

		Span	sp(3);

		try
		{
			sp.addNumber(42); std::cout << "Added 42" << std::endl;
			sp.addNumber(21); std::cout << "Added 21" << std::endl;
			sp.addNumber(84); std::cout << "Added 84" << std::endl;
			sp.addNumber(0); std::cout << "Added 0" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}

		printArray(sp.begin(), sp.end());
		std::cout << "longestSpan : " << sp.longestSpan() << std::endl;
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
	}
	{
		title("Span addNumbers");

		Span	sp(10);

		sp.addNumbers(huge, huge + 10);
		printArray(sp.begin(), sp.end());
		std::cout << "longestSpan : " << sp.longestSpan() << std::endl;
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
	}
	{
		title("Huge span");

		Span	sp(10000);

		std::random_shuffle(huge, huge + 10000);
		sp.addNumbers(huge, huge + 10000);
		printArray(sp.begin(), sp.end(), 10);
		std::cout << "longestSpan : " << sp.longestSpan() << std::endl;
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
	}
}
