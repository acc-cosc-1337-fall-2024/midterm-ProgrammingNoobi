#include "factorial.h"
#include <sstream> // For stringstream

// Function to return the factorial sequence as a string
std::string get_factorial_sequence(int n) {
    if (n < 1) return ""; // Handle invalid input

    std::ostringstream oss;
    int factorial = 1;

    // Create the factorial sequence
    for (int i = 1; i <= n; ++i) {
        if (i > 1) {
            oss << "x"; // Add 'x' for multiplication
        }
        oss << i; // Add the current number to the sequence
        factorial *= i; // Calculate factorial
    }

    // Append the result of the factorial at the end
    oss << "=" << factorial;

    return oss.str(); // Return the complete sequence as a string
}
