/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:10:49 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/15 11:28:52 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "easyfind.hpp"

static void	title(const std::string& title)
{
	std::cout << std::endl << "\e[1;30;47m " << title << " \e[0m" << std::endl << std::endl;
}

template <typename T>
static void	print_container(const T& container)
{
	std::cout << "container[" << container.size() << "] = { ";
	for (typename T::const_iterator it = container.begin(); it != container.end(); it++)
	{
		if (it != container.begin())
			std::cout << ", ";
		std::cout << *it;
	}
	std::cout << " };" << std::endl;
}

int	main(void)
{
	{
		title("Vector");

		std::vector<int>	list(3);

		list[0] = 42;
		list[1] = 21;
		list[2] = 84;

		print_container(list);

		try
		{
			std::cout << "easyfind(list, 42) = " << easyfind(list, 42) << std::endl;
			std::cout << "easyfind(list, 21) = " << easyfind(list, 21) << std::endl;
			std::cout << "easyfind(list, 84) = " << easyfind(list, 84) << std::endl;
			std::cout << "easyfind(list, 0) = " << easyfind(list, 0) << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		title("List");

		std::list<int>				list(3);
		std::list<int>::iterator	it = list.begin();

		*it++ = 84;
		*it++ = 21;
		*it++ = 42;

		print_container(list);

		try
		{
			std::cout << "easyfind(list, 42) = " << easyfind(list, 42) << std::endl;
			std::cout << "easyfind(list, 21) = " << easyfind(list, 21) << std::endl;
			std::cout << "easyfind(list, 84) = " << easyfind(list, 84) << std::endl;
			std::cout << "easyfind(list, 0) = " << easyfind(list, 0) << std::endl;
			std::cout << "easyfind(list, 999) = " << easyfind(list, 999) << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (EXIT_SUCCESS);
}
