///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Print Data
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write overloaded functions `void print(int)` and `void print(double)` that
/// print an integer and a double, respectively.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

// Function to print an integer
void print(int num) {
    std::cout << "Integer: " << num << std::endl;
}

// Function to print a double
void print(double num) {
    std::cout << std::fixed << std::showpoint; // For displaying floating point numbers
    std::cout << "Double: " << num << std::endl;
}

int main() {
    // Test the functions
    print(5);    // Calls the function for int
    print(3.14); // Calls the function for double

    return 0;
}

