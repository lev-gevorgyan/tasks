#include <iostream>
#include "task1.h"

int main()
{
	const int length = 3;
	int arr1[length];
	int arr2[length];

	int** arr = new int* [length];
	for (int i = 0; i < length; i++)
		arr[i] = new int[length];

	printSumOfLinesOfMatrix(arr, length);

	for (int i = 0; i < length; i++)
		delete[] arr[i];

	delete[] arr;
}