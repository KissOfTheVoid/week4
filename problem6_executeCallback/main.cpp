///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Execute Callback
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a function `void executeCallback(void (*callback)())` that takes a 
/// function pointer and executes the callback function.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

// Function to execute a callback function
void executeCallback(void (*callback)()) {
    // Check if the callback function pointer is not null
    if (callback != nullptr) {
        // Call the callback function
        callback();
    }
}

// Sample callback function
void sampleCallback() {
    std::cout << "Callback function executed." << std::endl;
}

int main()
{
    // Test the executeCallback function with sampleCallback
    executeCallback(&sampleCallback);

    return 0;
}