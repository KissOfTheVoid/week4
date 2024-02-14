///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Transform Array
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a function `void transformArray(int* arr, int size, int (*transform)(int))`
/// that applies a transformation function to each element of an array.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

// Function to apply a transformation function to each element of an array
void transformArray(int* arr, int size, int (*transform)(int)) {
    for (int i = 0; i < size; ++i) {
        arr[i] = transform(arr[i]);
    }
}

// Sample transformation function: squares the input
int square(int num) {
    return num * num;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Applying square transformation to each element of the array
    transformArray(arr, size, &square);

    // Printing the transformed array
    std::cout << "Transformed array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
