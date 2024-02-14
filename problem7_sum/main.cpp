///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Sum of Numbers
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a variadic function `int sum(int count, ...)` that returns the sum of 
/// 'count' numbers.
///
///////////////////////////////////////////////////////////////////////////////

#include <cstdarg> // For va_list and va_start
#include <iostream>

// Variadic function to calculate the sum of 'count' numbers
int sum(int count, ...) {
    // Initialize sum
    int result = 0;

    // Create a variable argument list
    va_list args;

    // Start the variable argument list
    va_start(args, count);

    // Iterate through the variable arguments
    for (int i = 0; i < count; ++i) {
        // Add each argument to the sum
        result += va_arg(args, int);
    }

    // Clean up the variable argument list
    va_end(args);

    // Return the sum
    return result;
}

int main() {
    // Testing the sum function with different numbers
    std::cout << "Sum of 3, 5, 7, and 9 is: " << sum(4, 3, 5, 7, 9) << std::endl;
    std::cout << "Sum of 1, 2, 3, 4, and 5 is: " << sum(5, 1, 2, 3, 4, 5) << std::endl;

    return 0;
}
