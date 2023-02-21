// ou-cs3203-assignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <stdio.h>

int sum(int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}


int main()
{
    //std::cout << "Hello World!\n";
    
    int arr[] = {10, 12, 14, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sumOfArr = sum(arr, size);

    printf("sum of arr array: %d\n", sumOfArr);

    return 0;
}

