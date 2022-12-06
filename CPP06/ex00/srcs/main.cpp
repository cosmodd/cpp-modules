/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:26:00 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 15:01:54 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cctype>

static void	error(std::string message)
{
	std::cout << "\e[1;37;41m ERROR \e[0m\e[1;37m " << message << "\e[0m" << std::endl;
}

static void	usage(char **av)
{
	std::cout << "  \e[1;37;46m Usage \e[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "  \e[1;90m" << av[0] << "\e[0m \e[1;32m<value>\e[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "  \e[3;90m<arg> -> mandatory argument\e[0m" << std::endl;
	std::cout << "  \e[3;90m[arg] -> optional argument\e[0m" << std::endl;
}

void	printChar(char value)
{
	if (std::isprint(value))
		std::cout << "char: '" << value << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	printInt(int value)
{
	std::cout << "int: " << value << std::endl;
}

void	printFloat(float value)
{
	if (value == (int)value)
		std::cout << "float: " << value << ".0f" << std::endl;
	else
		std::cout << "float: " << value << "f" << std::endl;
}

void	printDouble(double value)
{
	if (value == (int)value)
		std::cout << "double: " << value << ".0" << std::endl;
	else
		std::cout << "double: " << value << std::endl;
}

int	main(int ac, char **av)
{
	std::string	value;
	double		parsed;

	if (ac != 2)
	{
		usage(av);
		return (EXIT_FAILURE);
	}

	value = av[1];

	if (value.length() == 0)
	{
		error("Empty string");
		return (EXIT_FAILURE);
	}

	if (value.length() == 1 && !std::isdigit(value[0]))
	{
		printChar(value[0]);
		printInt(value[0]);
		printFloat(value[0]);
		printDouble(value[0]);
		return (EXIT_SUCCESS);
	}

	try {
		parsed = std::stod(av[1]);
	} catch (std::exception &e) {
		error("Invalid value");
		return (EXIT_FAILURE);
	}

	// std::cout << std::fixed << std::setprecision(50);

	printChar(parsed);
	printInt(parsed);
	printFloat(parsed);
	printDouble(parsed);
	return (EXIT_SUCCESS);
}
