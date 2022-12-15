/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:21:49 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/15 10:05:55 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>
#include <ctime>
#include "Array.hpp"

#define ARR_SIZE	10

template <typename T>
static void	printArray(const Array<T>& array)
{
	std::cout << "Array(" << array.size() << ") = {";
	for (unsigned int i = 0; i < array.size(); i++)
	{
		if (i >= 1)
			std::cout << ", ";
		std::cout << array[i];
	}
	std::cout << "};" << std::endl;
}

template <typename T>
static void	printArray(T* array, unsigned int size)
{
	std::cout << "T[" << size << "] = {";
	for (unsigned int i = 0; i < size; i++)
	{
		if (i >= 1)
			std::cout << ", ";
		std::cout << array[i];
	}
	std::cout << "};" << std::endl;
}

static void	title(const std::string& title)
{
	std::cout << std::endl << "\e[1;30;47m " << title << " \e[0m" << std::endl << std::endl;
}

int main( void ) {

	std::srand(std::time(nullptr));

	Array<float>	test(ARR_SIZE);
	float*			mirror = new float[ARR_SIZE];

	{
		title("Populating arrays");
		for (int i = 0; i < ARR_SIZE; i++)
		{
			float	randomNumber = std::rand() / 1e7;
			test[i] = randomNumber;
			mirror[i] = randomNumber;
		}

		printArray(test);
		printArray(mirror, ARR_SIZE);
	}

	{
		title("Equality checking");
		bool	areEqual = true;

		for (int i = 0; i < ARR_SIZE; i++)
		{
			if (test[i] != mirror[i])
			{
				std::cout << "test and mirror are not the same" << std::endl;
				areEqual = false;
				break;
			}
		}
		if (areEqual)
			std::cout << "test and mirror are the same !" << std::endl;
	}

	{
		title("Copy check");

		Array<float>	copy(test);

		copy[0] = 0.0f;
		printArray(test);
		printArray(copy);

		std::cout << std::endl;
		copy = test;

		copy[0] = 0.0f;
		printArray(test);
		printArray(copy);
	}


	return (EXIT_SUCCESS);
}
