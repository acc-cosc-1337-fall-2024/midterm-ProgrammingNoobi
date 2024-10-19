#include "points.h"

// Function to calculate points earned based on the number of widgets sold
int get_earned_points(int sold) {
    if (sold >= 1 && sold <= 5) {
        return sold * 1;      // 1 point per widget sold (1-5)
    } else if (sold >= 6 && sold <= 10) {
        return sold * 5;      // 5 points per widget sold (6-10)
    } else if (sold >= 11 && sold <= 15) {
        return sold * 10;     // 10 points per widget sold (11-15)
    } else if (sold >= 16) {
        return sold * 15;     // 15 points per widget sold (16 or more)
    }
    return 0; // Return 0 if no widgets sold
}
