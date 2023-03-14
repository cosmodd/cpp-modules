#include <iostream>
#include <iomanip>
#include <sys/time.h>

#include "PMergeMe.hpp"

void	usage(void)
{
	std::cout << "\e[1;37;44m Usage \e[0m ./PMergeMe [pos-int] [pos-int]..." << std::endl;
	std::cout << std::endl;
	std::cout << "The program takes a list of positive integers as arguments." << std::endl;
}

void	error(const std::string& message)
{
	std::cout << "\e[1;37;41m Error \e[0m " << message << std::endl;
}

char **split(char *str, char *delim)
{
	char **result = NULL;
	char *tmp = NULL;
	int i = 0;

	tmp = strtok(str, delim);
	while (tmp != NULL)
	{
		result = (char **)realloc(result, sizeof(char *) * ++i);
		if (result == NULL)
			exit(-1);
		result[i - 1] = tmp;
		tmp = strtok(NULL, delim);
	}
	result = (char **)realloc(result, sizeof(char *) * (i + 1));
	result[i] = 0;
	return (result);
}

int	stringListSize(char **list)
{
	int	i = 0;

	while (list[i])
		i++;
	return (i);
}

std::vector<int>	parseArgumentsToVector(int size, char **numbers)
{
	std::vector<int>	values;

	for (int i = 0; i < size; i++)
	{
		try
		{
			int value = std::stoi(numbers[i]);
			if (value < 0)
				throw std::exception();
			values.push_back(value);
		}
		catch (std::exception& e)
		{
			error("Invalid argument: \"" + std::string(numbers[i]) + "\"");
			exit(1);
		}
	}
	return (values);
}

std::list<int>	parseArgumentsToList(int size, char **numbers)
{
	std::list<int>	values;

	for (int i = 0; i < size; i++)
	{
		try
		{
			int value = std::stoi(numbers[i]);
			if (value < 0)
				throw std::exception();
			values.push_back(value);
		}
		catch (std::exception& e)
		{
			error("Invalid argument: \"" + std::string(numbers[i]) + "\"");
			exit(1);
		}
	}
	return (values);
}

template <class Container>
void	printContainer(Container& container, int max = -1)
{
	std::cout << "[";
	for (typename Container::iterator it = container.begin(); it != container.end(); it++)
	{
		if (max != -1 && std::distance(container.begin(), it) >= max)
		{
			std::cout << "...";
			break;
		}
		std::cout << *it;
		if (std::distance(it, container.end()) > 1)
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}

template <class Iterator>
bool	isSorted(Iterator begin, Iterator end)
{
	Iterator it = begin;
	Iterator next = ++begin;

	while (next != end)
	{
		if (*it > *next)
			return false;
		it++;
		next++;
	}
	return true;
}

std::string	emojiBoolean(bool value)
{
	return (value ? "✅" : "❌");
}

int	main(int ac, char **av)
{
	// Containers
	std::vector<int>	vector;
	std::list<int>		list;

	// Timers
	timeval	vstart, vend, lstart, lend;
	long	velapsed, lelapsed;

	if (ac < 2)
	{
		usage();
		return (1);
	}

	// Parse arguments
	if (ac < 3)
	{
		av = split(av[1], (char *)" ");
		ac = stringListSize(av);
	}
	else
	{
		ac--;
		av++;
	}

	// Fill containers
	vector = parseArgumentsToVector(ac, av);
	list = parseArgumentsToList(ac, av);

	// Print initial values
	std::cout << "\e[1;37;47m Before sorting \e[0m" << std::endl;
	std::cout << "\e[1;37;107m Vector \e[0m" << (isSorted(vector.begin(), vector.end()) ? "\e[1;37;42m ✅ \e[0m " : "\e[1;37;41m ❌ \e[0m "); printContainer(vector, 10);
	std::cout << "\e[1;37;107m   List \e[0m" << (isSorted(list.begin(), list.end()) ? "\e[1;37;42m ✅ \e[0m " : "\e[1;37;41m ❌ \e[0m "); printContainer(list, 10);
	std::cout << std::endl;

	// Sort
	gettimeofday(&vstart, NULL);
	sort(vector);
	gettimeofday(&vend, NULL);
	velapsed = (vend.tv_sec - vstart.tv_sec) * 1e6 + (vend.tv_usec - vstart.tv_usec);

	gettimeofday(&lstart, NULL);
	sort(list);
	gettimeofday(&lend, NULL);
	lelapsed = (lend.tv_sec - lstart.tv_sec) * 1e6 + (lend.tv_usec - lstart.tv_usec);

	// Print sorted values
	std::cout << "\e[1;37;47m After sorting \e[0m" << std::endl;
	std::cout << "\e[1;37;107m Vector \e[0m" << (isSorted(vector.begin(), vector.end()) ? "\e[1;37;42m ✅ \e[0m " : "\e[1;37;41m ❌ \e[0m "); printContainer(vector, 10);
	std::cout << "\e[1;37;107m   List \e[0m" << (isSorted(list.begin(), list.end()) ? "\e[1;37;42m ✅ \e[0m " : "\e[1;37;41m ❌ \e[0m "); printContainer(list, 10);
	std::cout << std::endl;

	// Print benchmark results
	std::cout << "\e[1;37;47m Benchmark \e[0m" << std::endl;
	std::cout << "\e[1;37;107m std::vector<int>(" << vector.size() << ") \e[0m\e[1;37;42m " << std::setw(10) << velapsed << " µs \e[0m" << std::endl;
	std::cout << "\e[1;37;107m   std::list<int>(" << list.size() << ") \e[0m\e[1;37;42m " << std::setw(10) << lelapsed << " µs \e[0m" << std::endl;
}
