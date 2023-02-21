// ou-cs3203-assignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

using namespace std;

void reverseArr(int arr[], int size) 
{
    std::reverse(arr, arr + size);
}

int productArr(int arr[], int size)
{
    int product = 1; 
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}
int sumArr(int arr[], int size) 
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
    // our test array and its size
    //int bday[] = {10, 12, 14, 25};
    // int size = sizeof(arr) / sizeof(arr[0]);
    //
    // user input array and size
    int arr[100];
    int size;
    int data;
    cout << "enter size: ";
    cin >> size;
    cout << "enter array data and press enter: " << endl;

    for (int i = 0; i < size; i++) 
    {
        cin >> data;
        arr[i] = data;
    }

    // sum method
    int sumOfArr = sumArr(arr, size);
    // product method
    int productOfArr = productArr(arr, size);
    // reverse method
    reverseArr(arr, size);

    cout << "sum of arr array: " << sumOfArr << endl;
    cout << "product of arr array: " << productOfArr << endl;
    cout << "reverse of arr array: " << endl;
    for (int i =0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

