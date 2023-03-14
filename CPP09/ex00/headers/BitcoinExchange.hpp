#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <limits>
#include <iomanip>

#define CSV_FILE_PATH	"./data.csv"

std::map<std::string, float>	parseCSVFile(const std::string& csvPath);
bool							isValidDate(const std::string& date);
