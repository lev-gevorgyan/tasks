#include <iostream>

//Auxiliary functions
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

//Decisions
int MaxIndex(int* arr, const int length)
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

int MinIndex(int* arr, const int length)
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

int AddMaxToMin(int* arr, const int length)
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

int* ReverseArr(int* arr, const int length)
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

int* MultArr(int* arr1, int* arr2, const int length)
{
	fillArr(arr1, length);
	fillArr(arr2, length);

	for (auto ix = 0; ix < length; ++ix)
	{
		arr1[ix] *= arr2[ix];
	}
	return arr1;
}

int* SumArr(int* arr1, int* arr2, const int length)
{
	fillArr(arr1, length);
	fillArr(arr2, length);

	for (auto ix = 0; ix < length; ++ix)
	{
		arr1[ix] += arr2[ix];
	}
	return arr1;
}

void PrintGLineOfMatrix(int** arr, const int length)
{
	fillMatrix(arr, length);

	int* result = new int[length];
	for (auto ix = 0; ix < length; ++ix)
		std::cout << arr[ix][ix] << std::endl;
}

void PrintAuxLineOfMatrix(int** arr, const int length)
{
	fillMatrix(arr, length);

	int* result = new int[length];
	for (auto ix = 0; ix < length; ++ix)
		std::cout << arr[length - 1 - ix][ix] << std::endl;
}

void PrintSumOfLinesOfMatrix(int** arr, const int length)
{
	fillMatrix(arr, length);

	int* result = new int[length];
	for (auto ix = 0; ix < length; ++ix)
		std::cout << arr[ix][ix] + arr[length - 1 - ix][ix] << std::endl;
}

void ChangeLinesOfMatrix(int** arr, const int length)
{
	fillMatrix(arr, length);

	for (auto ix = 0; ix < length; ++ix)
	{
		auto tmp = arr[ix][ix];
		arr[ix][ix] = arr[ix][length - 1 - ix];
		arr[ix][length - 1 - ix] = tmp;
	}
}

void PrintOddNumbersOfMatrix(int** arr, const int length)
{
	fillMatrix(arr, length);

	for (auto i = 0; i < length; ++i)
		for (auto j = 0; j < length; ++j)
			if (arr[i][j] % 2) std::cout << arr[i][j] << std::endl;
}

void PrintCoupleNumbersOfMatrix(int** arr, const int length)
{
	fillMatrix(arr, length);

	for (auto i = 0; i < length; ++i)
		for (auto j = 0; j < length; ++j)
			if (!(arr[i][j] % 2)) std::cout << arr[i][j] << std::endl;
}

void MatrixToArr(int* arr, int** mat, const int matLength)
{
	fillMatrix(mat, matLength);

	for (auto i = 0; i < matLength; ++i)
		for (auto j = 0; j < matLength; ++j)
			arr[i * matLength + j] = mat[i][j];
	for (auto ix = 0; ix < matLength * matLength; ++ix)
		std::cout << arr[ix] << std::endl;
}

char MostRepeatedChar(std::string str)
{
	const unsigned int LENGTH = str.length();
	int max = 0;
	int count = 0;
	char result = ' ';

	for (auto i = 0; i < LENGTH; ++i)
	{
		for (auto j = i; j < LENGTH; ++j)
		{
			if (str[i] == str[j]) ++count;
		}
		if (count > max)
		{
			max = count;
			result = str[i];
		}
		count = 0;
	}

	return result;
}

std::string LongestSubRepeatingStr(std::string str)
{
	const unsigned int LENGTH = str.length();
	int max = 0;
	int count = 0;
	std::string result;
	char tmp = ' ';

	for (int i = 0; i < LENGTH-1; ++i)
	{
		while (str[i] == str[static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(i) + 1])
		{
			++count;
			++i;
		}
		if (count > max)
		{
			max = count;
			tmp = str[i];
		}
		count = 0;
	}

	for (auto ix = 0; ix <= max; ++ix) 
		result += tmp;

	return result;
}

int AvgMulSumArr(int* arr, int length)
{
	fillArr(arr, length);

	auto sum = 0;
	auto mul = 1;

	for (auto ix = 0; ix < length; ++ix)
	{
		sum += arr[ix];
		mul *= arr[ix];
	}

	return (sum + mul) / 2;
}

void LongestSubStr(std::string str)
{
	const unsigned int LENGTH = str.length();
	std::string maxStr;
	std::string tmpStr;

	for (auto ix = 0; ix < LENGTH; ++ix)
	{
		if (str[ix] != ' ')
		{
			tmpStr += str[ix];
		}
		else
		{
			tmpStr = "";
		}

		if (tmpStr.length() > maxStr.length())
		{
			maxStr = tmpStr;
		}
	}

	std::cout << maxStr << std::endl;
}