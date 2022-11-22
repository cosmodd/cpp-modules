/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:04:27 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/22 11:39:43 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

static void	error(std::string message)
{
	std::cout << "\e[1;37;41m ERROR \e[0m\e[1;37m " << message << "\e[0m" << std::endl;
}

static void	usage(char **av)
{
	std::cout << "  \e[1;37;46m Usage \e[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "  \e[1;90m" << av[0] << "\e[0m \e[1;32m<filename>\e[0m \e[1;33m<search>\e[0m \e[1;34m<replace>\e[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "  \e[3;90m<arg> -> mandatory argument\e[0m" << std::endl;
	std::cout << "  \e[3;90m[arg] -> optional argument\e[0m" << std::endl;
}

/**
 * @brief Read the file given and store the content in the given string reference.
 *
 * @param fileName Path to the file
 * @param content Reference to where to store the file content
 * @return boolean - true if the file was successfully read
 */
static bool	readFile(const std::string& fileName, std::string& content)
{
	std::ifstream		inputStream(fileName);
	std::stringstream	stringStream;

	if (!inputStream.is_open())
	{
		error("Could not open file '" + fileName + "'");
		return (false);
	}
	stringStream << inputStream.rdbuf();
	content = stringStream.str();
	return (true);
}

/**
 * @brief Write the given string to the given file.
 *
 * @param fileName Path to the file
 * @param content String to write to the file
 * @return boolean - true if the file was successfully written
 */
static bool	writeFile(const std::string& fileName, const std::string& content)
{
	std::ofstream		outputStream(fileName);

	if (!outputStream.is_open())
	{
		error("Could not open file '" + fileName + "'");
		return (false);
	}
	outputStream << content;
	return (true);
}

/**
 * @brief Replace all occurences of the search string by the replace string.
 *
 * @param content String to modify
 * @param search String to search for
 * @param replace String to replace the search string with
 */
static void	replaceAll(std::string& src, const std::string& search, const std::string& replace)
{
	std::size_t	find = 0;

	if (search.empty())
		return ;
	while ((find = src.find(search, find)) != std::string::npos)
		src.replace(find, search.length(), replace);
}

int	main(int ac, char **av)
{
	std::string	filename;
	std::string	search;
	std::string	replace;
	std::string	content;

	if (ac != 4)
	{
		usage(av);
		return (EXIT_FAILURE);
	}

	filename = av[1];
	search = av[2];
	replace = av[3];

	if (!readFile(filename, content))
		return (EXIT_FAILURE);

	replaceAll(content, search, replace);

	if (!writeFile(filename + ".replace", content))
		return (EXIT_FAILURE);

	return (EXIT_SUCCESS);
}
