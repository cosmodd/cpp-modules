/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:26:00 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 15:13:17 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cctype>

struct	Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

static void	title(std::string title)
{
	std::cout << std::endl;
	std::cout << "\e[1;30;47m " << title << " \e[0m" << std::endl;
	std::cout << std::endl;
}

static uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

static Data		*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data	*data = new Data;

	data->s1 = "Hello";
	data->n = 42;
	data->s2 = "World";

	title("Before serialization/deserialization");
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n: " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;

	Data		*deserialized = deserialize(serialize(data));

	title("After serialization/deserialization");
	std::cout << "s1: " << deserialized->s1 << std::endl;
	std::cout << "n: " << deserialized->n << std::endl;
	std::cout << "s2: " << deserialized->s2 << std::endl;

	delete data;
	return (EXIT_SUCCESS);
}
