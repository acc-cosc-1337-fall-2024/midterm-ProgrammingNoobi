#include <iostream>
#include <iomanip>
#include "questions2.h"

int main() {
    int widgets_sold;

    std::cout << "Widgets Sold\tPoints Earned\n";
    std::cout << "------------------------------\n";

    // Generate the table for widgets sold in different ranges
    for (widgets_sold = 1; widgets_sold <= 20; ++widgets_sold) {
        int points = get_earned_points(widgets_sold);
        std::cout << std::setw(12) << widgets_sold << "\t\t" << points << "\n";
    }

    // Allow for user-defined input beyond the predefined ranges
    char choice;
    do {
        std::cout << "Enter the number of widgets sold (or 0 to exit): ";
        std::cin >> widgets_sold;

        if (widgets_sold < 0) {
            std::cout << "Invalid input. Please enter a non-negative integer.\n";
        } else if (widgets_sold > 0) {
            int points = get_earned_points(widgets_sold);
            std::cout << "For " << widgets_sold << " widgets sold, Points Earned: " << points << "\n";
        }
    } while (widgets_sold != 0);

    std::cout << "Thank you for using the program!\n";
    return 0;
}
