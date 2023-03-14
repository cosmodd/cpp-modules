#include "PMergeMe.hpp"

#include <iostream>
#include <iomanip>
#include <iterator>

// -------------------------------------------------------------------------- //
//  Using std::vector                                                         //
// -------------------------------------------------------------------------- //
void	insertionSort(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = begin; it != end; ++it)
		std::rotate(std::upper_bound(begin, it, *it), it, it + 1);
}

void	mergeSort(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (end - begin <= 1)
		return ;
	std::vector<int>::iterator	middle = begin + (end - begin) / 2;
	mergeSort(begin, middle);
	mergeSort(middle, end);
	std::inplace_merge(begin, middle, end);
}

void	sort(std::vector<int>& vector)
{
	if (vector.size() <= 15)
		insertionSort(vector.begin(), vector.end());
	else
		mergeSort(vector.begin(), vector.end());
}

// -------------------------------------------------------------------------- //
//  Using std:list                                                            //
// -------------------------------------------------------------------------- //
void	insertionSort(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	for (std::list<int>::iterator it = begin; it != end; ++it)
	{
		std::list<int>::iterator	next = it; ++next;
		std::rotate(std::upper_bound(begin, it, *it), it, next);
	}
}

void	mergeSort(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	if (std::distance(begin, end) <= 1)
		return ;
	std::list<int>::iterator	middle = begin; std::advance(middle, std::distance(begin, end) / 2);
	mergeSort(begin, middle);
	mergeSort(middle, end);
	std::inplace_merge(begin, middle, end);
}

void	sort(std::list<int>& list)
{
	if (list.size() <= 15)
		insertionSort(list.begin(), list.end());
	else
		mergeSort(list.begin(), list.end());
}
