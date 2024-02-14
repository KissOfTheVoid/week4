///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Filter Array
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a function `int* filter(int* arr, int size, int& newSize, bool (*filterFunc)(int))`
/// that filters an array based on a predicate function and returns a new array.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

// Function to filter an array based on a predicate function
int* filter(int* arr, int size, int& newSize, bool (*filterFunc)(int)) {
    // Count the number of elements that satisfy the filter condition
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (filterFunc(arr[i])) {
            ++count;
        }
    }

    // Allocate memory for the new array
    int* filteredArr = new int[count];
    newSize = count;

    // Copy elements satisfying the filter condition to the new array
    int index = 0;
    for (int i = 0; i < size; ++i) {
        if (filterFunc(arr[i])) {
            filteredArr[index++] = arr[i];
        }
    }

    return filteredArr;
}

// Sample filter function: filters even numbers
bool isEven(int num) {
    return num % 2 == 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    // New size after filtering
    int newSize = 0;

    // Filtering even numbers
    int* filtered = filter(arr, size, newSize, &isEven);

    // Printing the filtered array
    std::cout << "Filtered array: ";
    for (int i = 0; i < newSize; ++i) {
        std::cout << filtered[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate memory for the filtered array
    delete[] filtered;

    return 0;
}
