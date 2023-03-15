#include "BitcoinExchange.hpp"

template<typename T>
std::string	toString(T value)
{
	std::stringstream	ss;
	ss << value;
	return (ss.str());
}

void	error(const std::string& message)
{
	std::cout << "\e[1;37;41m Error \e[0m " << message << std::endl;
}

int	main(int ac, char **av)
{
	std::map<std::string, float>	csvData;
	std::ifstream					inputFileStream;
	std::string						line;

	if (ac != 2)
	{
		error("Invalid number of arguments");
		return (EXIT_FAILURE);
	}

	try
	{
		csvData = parseCSVFile(CSV_FILE_PATH);
	}
	catch (std::exception& e)
	{
		error(e.what());
		return (EXIT_FAILURE);
	}

	try
	{
		struct stat		fileStat;

		inputFileStream.open(av[1]);
		if (!inputFileStream.is_open())
			throw std::exception();

		stat(av[1], &fileStat);
		if (!S_ISREG(fileStat.st_mode))
		{
			if (inputFileStream.is_open())
				inputFileStream.close();
			throw std::exception();
		}
	}
	catch(const std::exception& e)
	{
		error("Failed to open file: \"" + toString(av[1]) + "\"");
		return (EXIT_FAILURE);
	}

	// Skip first line (headers)
	std::getline(inputFileStream, line);

	while (std::getline(inputFileStream, line))
	{
		std::stringstream								lineStream(line);
		std::string										date;
		float											value;
		std::map<std::string, float>::const_iterator	it;

		if (line.empty())
		{
			error("Empty line");
			continue;
		}

		std::getline(lineStream, date, '|');
		date.erase(date.find_last_not_of(" \t") + 1);

		if (!isValidDate(date))
		{
			error("Invalid date: \"" + date + "\"");
			continue;
		}

		if (lineStream.eof())
		{
			error("Expected value after date: \"" + date + "\"");
			continue;
		}

		lineStream >> value;

		if (value <= 0)
		{
			error("Not a positive number: \"" + toString(value) + "\"");
			continue;
		}

		if (value >= 1000)
		{
			error("Number too big: \"" + toString(value) + "\"");
			continue;
		}

		it = find_or_nearest(csvData, date);

		std::cout << "\e[1;37;44m " << it->first << " \e[0m";
		std::cout << "\e[1;37;47m " << std::setw(10) << value << " 💰 \e[0m";
		std::cout << "\e[1;37;46m " << std::setw(10) << it->second << " 💱 \e[0m";
		std::cout << "\e[1;37;42m " << std::setw(10) << value * it->second << " 💶 \e[0m";
		std::cout << std::endl;
	}


	return (EXIT_SUCCESS);
}
