#include <iostream>
#include "task1.h"

int maxIndex(int* arr, const int length)
{
	for (auto ix = 0; ix < length; ++ix)
	{
		std::cout << "Enter element " << ix + 1 << " : ";
		std::cin >> arr[ix];
	}

	auto max = arr[0];
	auto result = 0;
	for (auto ix = 0; ix < length; ++ix)
	{
		if (arr[ix] > max)
		{
			max = arr[ix];
			result = ix;
		}
	}
	return result;
}


int minIndex(int* arr, const int length)
{
	for (auto ix = 0; ix < length; ++ix)
	{
		std::cout << "Enter element " << ix + 1 << " : ";
		std::cin >> arr[ix];
	}

	auto min = arr[0];
	auto result = 0;
	for (auto ix = 0; ix < length; ++ix)
	{
		if (arr[ix] < min)
		{
			min = arr[ix];
			result = ix;
		}
	}
	return result;
}