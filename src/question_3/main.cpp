#include <iostream>
#include "conversion.h"

int main() {
    double celsius;
    char choice;

    do {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> celsius;

        double fahrenheit = get_fahrenheit(celsius);
        std::cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit." << std::endl;

        std::cout << "Would you like to convert another temperature? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Thank you for using the converter!" << std::endl;

    return 0;
}
