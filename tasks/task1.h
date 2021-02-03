#pragma once

//Auxuliary functions
void fillArr(int*, const int);
void outArr(int*, const int);
void fillMatrix(int**, const int);
void outMatrix(int**, const int);

//Decisions
int MaxIndex(int*, const int);
int MinIndex(int*, const int);
int AddMaxToMin(int*, const int);
int* ReverseArr(int*, const int);
int* MultArr(int*, int*, const int);
int* SumArr(int*, int*, const int);
void PrintGLineOfMatrix(int**, const int);
void PrintAuxLineOfMatrix(int**, const int);
void PrintSumOfLinesOfMatrix(int**, const int);
void ChangeLinesOfMatrix(int**, const int);
void PrintOddNumbersOfMatrix(int**, const int);
void PrintCoupleNumbersOfMatrix(int**, const int);
void MatrixToArr(int*, int**, const int);
char MostRepeatedChar(std::string);
std::string LongestSubRepeatingStr(std::string);
int AvgMulSumArr(int*, int);
void LongestSubStr(std::string);