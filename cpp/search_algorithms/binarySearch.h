#include <iostream>
#include <string.h>

template <typename T>
bool condition(T mid, T exp)
{
    if (mid >= exp)
    {
        return true;
    }
    else
    {
        return false;
    }

    // pass
}

template <typename T>
T search(T *data, int n, T expected)
{
    // must have already sorted array

    T left = data[0];
    T right = data[n - 1];
    while (left < right)
    {
        T mid = left + (right - left) / 2;
        if (condition(mid, expected))
        {
            right = mid;
        }

        else
        {
            left = mid + 1;
        }
    }

    // Return value of data that satisfy the result
    // return *left - 1;

    return left;
}