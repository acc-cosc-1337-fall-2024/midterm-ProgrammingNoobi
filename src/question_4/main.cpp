#include <iostream>
#include "question4.h"

int main() {
    int number;

    // Prompt user for a number
    std::cout << "Enter a number between 1 and 10: ";
    std::cin >> number;

    // Validate that the number is in the range of 1 to 10
    if (number < 1 || number > 10) {
        std::cout << "Invalid input. Please enter a number between 1 and 10." << std::endl;
        return 1; // Exit with an error code
    }

    // Pass the number to the get_factorial_sequence function
    std::string result = get_factorial_sequence(number);

    // Display the factorial sequence
    std::cout << "Factorial sequence: " << result << std::endl;

    return 0; // Successful exit
}
