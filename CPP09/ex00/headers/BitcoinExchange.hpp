#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <limits>
#include <iomanip>
#include <sys/stat.h>

#define CSV_FILE_PATH	"./data.csv"

std::map<std::string, float>		parseCSVFile(const std::string& csvPath);
bool								isValidDate(const std::string& date);

template <typename Map>
typename Map::const_iterator	find_or_nearest(const Map& map, const std::string& key)
{
	typename Map::const_iterator	it = map.lower_bound(key);

	if (it != map.end() && it->first == key)
		return (it);
	return (it == map.begin() ? it : --it);
}
