#include <bits/stdc++.h>
using namespace std;

// function to bubble sort the array
void bubbleSort(int arr[], int size)
{
    int i, j;
    // outer loop
    for (i = 0; i < size; i++)
    {
        // inner loop
        for (j = 0; j < size - i - 1; j++)
        {
            // if elemet is smaller that the next one
            if (arr[j] > arr[j + 1])
            {
                // then swap the elements
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// function to print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// driver function
int main()
{
    // initialise array
    int arr[] = {7, 8, 3, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n); // call bubble sort
    cout << "Sorted array is : ";
    printArray(arr, n);
}