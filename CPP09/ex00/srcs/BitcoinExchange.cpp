#include "BitcoinExchange.hpp"

std::map<std::string, float>	parseCSVFile(const std::string& csvPath)
{
	std::map<std::string, float>	result;
	std::ifstream					csvFile(csvPath);
	std::string						line;

	if (!csvFile.is_open())
		throw std::runtime_error("Failed to open file: \"" + csvPath + "\"");

	std::getline(csvFile, line);

	while (std::getline(csvFile, line))
	{
		std::stringstream	lineStream(line);
		std::string			date;
		float				value;

		std::getline(lineStream, date, ',');
		if (!(lineStream >> value))
		{
			csvFile.close();
			throw std::runtime_error("Failed to parse value from line: \"" + line + "\"");
		}
		result[date] = value;
	}

	csvFile.close();
	return (result);
}

bool	isValidDate(const std::string& date)
{
	std::stringstream	dateStream(date);
	int					year, month, day;

	year = month = day = -1;

	// Check if date is 10 characters long (YYYY-MM-DD)
	if (date.length() != 10)
		return (false);

	// Check if date is in the format YYYY-MM-DD
	if (date[4] != '-' || date[7] != '-')
		return (false);
 
	// Check if date is valid
	if (!(dateStream >> year))
		return (false);
	dateStream.ignore(1); // Ignore '-'
	if (!(dateStream >> month))
		return (false);
	dateStream.ignore(1); // Ignore '-'
	if (!(dateStream >> day))
		return (false);

	if (year < 0 || month < 0 || day < 0 || month > 12 || day > 31)
		return (false);

	return (true);
}
