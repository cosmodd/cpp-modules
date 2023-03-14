#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>

// Using std::vector
void	insertionSort(std::vector<int>::iterator begin, std::vector<int>::iterator end);
void	mergeSort(std::vector<int>::iterator begin, std::vector<int>::iterator end);
void	sort(std::vector<int>& vector);

// Using std::list
void	insertionSort(std::list<int>::iterator begin, std::list<int>::iterator end);
void	mergeSort(std::list<int>::iterator begin, std::list<int>::iterator end);
void	sort(std::list<int>& list);
