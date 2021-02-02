#include <iostream>
#include "task1.h"

//??????? ???????????? ??????????????
void fillArr(int* arr, const int length)
{
	for (auto ix = 0; ix < length; ++ix)
	{
		std::cout << "Enter element " << ix << " : ";
		std::cin >> arr[ix];
	}
}

void outArr(int* arr, const int length)
{
	for (int ix = 0; ix < length; ++ix)
		std::cout << arr[ix] << std::endl;
}

void fillMatrix(int** arr, const int length)
{
	for (auto i = 0; i < length; ++i)
	{
		for (auto j = 0; j < length; ++j)
		{
			std::cout << "Enter element " << i << ' ' << j << " : ";
			std::cin >> arr[i][j];
		}
	}
}

void outMatrix(int** arr, const int length)
{
	for (int i = 0; i < length; ++i)
		for (auto j = 0; j < length; ++j)
			std::cout << arr[i][j] << std::endl;
}

//????????? ??????????? ??????????????
int maxIndex(int* arr, const int length)
{
	fillArr(arr, length);

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
	fillArr(arr, length);

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

int addMaxToMin(int* arr, const int length)
{
	fillArr(arr, length);

	auto max = arr[0];
	for (auto ix = 0; ix < length; ++ix)
	{
		if (arr[ix] > max)
		{
			max = arr[ix];
		}
	}

	auto min = arr[0];
	for (auto ix = 0; ix < length; ++ix)
	{
		if (arr[ix] < min)
		{
			min = arr[ix];
		}
	}
	return max + min;
}

int* reverseArr(int* arr, const int length)
{
	fillArr(arr, length);

	for (auto ix = 0; ix < length/2; ++ix)
	{
		auto tmp = arr[ix];
		arr[ix] = arr[length - 1 - ix];
		arr[length - 1 - ix] = tmp;
	}
	return arr;
}

int* multArr(int* arr1, int* arr2, const int length)
{
	fillArr(arr1, length);
	fillArr(arr2, length);

	for (auto ix = 0; ix < length; ++ix)
	{
		arr1[ix] *= arr2[ix];
	}
	return arr1;
}

int* sumArr(int* arr1, int* arr2, const int length)
{
	fillArr(arr1, length);
	fillArr(arr2, length);

	for (auto ix = 0; ix < length; ++ix)
	{
		arr1[ix] += arr2[ix];
	}
	return arr1;
}

void printGLineOfMatrix(int** arr, const int length)
{
	fillMatrix(arr, length);

	int* result = new int[length];
	for (auto ix = 0; ix < length; ++ix)
		std::cout << arr[ix][ix] << std::endl;
}

void printAuxLineOfMatrix(int** arr, const int length)
{
	fillMatrix(arr, length);

	int* result = new int[length];
	for (auto ix = 0; ix < length; ++ix)
		std::cout << arr[length - 1 - ix][ix] << std::endl;
}

void printSumOfLinesOfMatrix(int** arr, const int length)
{
	fillMatrix(arr, length);

	int* result = new int[length];
	for (auto ix = 0; ix < length; ++ix)
		std::cout << arr[ix][ix] + arr[length - 1 - ix][ix] << std::endl;
}