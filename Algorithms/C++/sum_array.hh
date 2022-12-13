#pragma once
#include <iostream>

void sum_array(int array[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }

    std::cout << sum << std::endl;
}
