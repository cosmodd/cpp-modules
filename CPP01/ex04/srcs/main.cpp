/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:04:27 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/07 17:32:43 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

static void	error(std::string message)
{
	std::cout << "\e[1;41;37m ERROR \e[0m\e[1;37m " << message << "\e[0m" << std::endl;
}

/**
 * @brief Read the content of the file given in the arguments.
 *
 * @param filename	Name of the file to read.
 * @return std::string	content of the file or an empty string if not found.
 */
static std::string	 readFile(std::string filename)
{
	std::ifstream		fileReader(filename);
	std::stringstream	contentBuffer;

	if (!fileReader.is_open())
		return "";
	contentBuffer << fileReader.rdbuf();
	return contentBuffer.str();
}

static std::string	replaceOccurences(std::string content, std::string search, std::string replace)
{
	std::string	replaced = "";
	std::size_t	previous = 0;
	std::size_t	found;

	(void) replace;
	found = content.find(search);
	if (found == std::string::npos)
		return content;
	while (found != std::string::npos)
	{
		replaced.append(content.substr(previous, found - previous));
		replaced.append(replace);

		previous = found + search.length();
		found = content.find(search, found + search.length());
	}
	replaced.append(content.substr(previous, content.length() - previous));
	return replaced;
}

int	main(int ac, char** av)
{
	std::string			filename, search, replace, content;
	std::ifstream		file;

	if (ac < 4)
	{
		error("Not enough arguments !");
		return (EXIT_SUCCESS);
	}
	if (ac > 4)
	{
		error("Too many arguments !");
		return (EXIT_SUCCESS);
	}
	filename = av[1];
	search = av[2];
	replace = av[3];
	content = readFile(filename);
	if (content.empty())
	{
		error("File '" + filename + "' doesn't exist !");
		return (EXIT_SUCCESS);
	}
	if (search.empty())
	{
		error("Search may not be empty !");
		return (EXIT_SUCCESS);
	}
	std::cout << replaceOccurences(content, search, replace);
	return (EXIT_SUCCESS);
}
