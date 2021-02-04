#include <iostream>

int RecFac(int n)
{
    if (n > 1)
        return n * RecFac(n - 1);
    else
        return 1;
}

int IterFac(int n)
{
    auto result = 1;
    if (n < 1)
        return result;
    else
    {
        for (auto ix = 1; ix <= n; ++ix)
        {
            result *= ix;
        }
    }
    return result;
}

void RecNum(int n)
{
    if (n >= 0)
        std::cout << n;
    if (n < 0) return;
    RecNum(n - 1);
}

void IterNum(int n)
{
    if (n >= 0)
    {
        for (auto ix = n; ix >= 0; --ix)
            std::cout << ix;
    }
}

int RecFib(int n)
{
    if (n < 2)
        return n;
    else
        return RecFib(n - 1) + RecFib(n - 2);
}

int IterFib(int num) {
    int x = 0, y = 1, z = 0;

    for (int ix = 0; ix < num; ++ix) 
    {
        z = x + y;
        x = y;
        y = z;
    }
    return x;
}

void RecArr(int* arr, int length)
{
    if (length > 0)
        std::cout << *(arr + length - 1);
    if (length <= 0) return;
    RecArr(arr, length - 1);
}

void ReverseStr(std::string& str)
{
    auto len = str.length();
    for (auto ix = 0; ix < len/2; ++ix)
    {
        char tmp = str[ix];
        str[ix] = str[len - 1 - ix];
        str[len - 1 - ix] = tmp;
    }
}
