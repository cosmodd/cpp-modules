/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:13:42 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/15 15:30:32 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

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
			std::cout << ", ..., " << *std::prev(last);
			break;
		}
	}
	std::cout << " }" << std::endl;
}

int	main(void)
{
	{
		title("MutantStack");

		MutantStack<int>	mstack;

		mstack.push(5); printArray(mstack.begin(), mstack.end());
		mstack.push(17); printArray(mstack.begin(), mstack.end());
		mstack.push(3); printArray(mstack.begin(), mstack.end());
		mstack.push(5); printArray(mstack.begin(), mstack.end());
		mstack.push(737); printArray(mstack.begin(), mstack.end());

		std::cout << "Top : " << mstack.top() << std::endl;
		std::cout << "Size: " << mstack.size() << std::endl;

		printArray(mstack.begin(), mstack.end());
		while (!mstack.empty())
		{
			mstack.pop();
			printArray(mstack.begin(), mstack.end());
		}
	}
	{
		title("List");

		std::list<int>	list;

		list.push_back(5); printArray(list.begin(), list.end());
		list.push_back(17); printArray(list.begin(), list.end());
		list.push_back(3); printArray(list.begin(), list.end());
		list.push_back(5); printArray(list.begin(), list.end());
		list.push_back(737); printArray(list.begin(), list.end());

		std::cout << "Top : " << list.back() << std::endl;
		std::cout << "Size: " << list.size() << std::endl;

		printArray(list.begin(), list.end());
		while (!list.empty())
		{
			list.pop_back();
			printArray(list.begin(), list.end());
		}
	}
	{
		title("MutantStack copy");

		MutantStack<int>	mstack;

		mstack.push(5); printArray(mstack.begin(), mstack.end());
		mstack.push(17); printArray(mstack.begin(), mstack.end());
		mstack.push(3); printArray(mstack.begin(), mstack.end());

		std::stack<int>	stack(mstack); std::cout << "Copying stack" << std::endl;

		mstack.pop(); printArray(mstack.begin(), mstack.end());

		while (!stack.empty())
		{
			std::cout << stack.top() << " ";
			stack.pop();
		}
		std::cout << std::endl;
	}
	return (EXIT_SUCCESS);
}
