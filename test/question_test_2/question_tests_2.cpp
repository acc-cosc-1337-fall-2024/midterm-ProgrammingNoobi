#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"  // Make sure to include the correct header file

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Points earned based on widgets sold") {
    REQUIRE(get_earned_points(3) == 3);    // 1 point each for 3 widgets
    REQUIRE(get_earned_points(9) == 45);   // 5 points each for 9 widgets
    REQUIRE(get_earned_points(11) == 110);  // 10 points each for 11 widgets
    REQUIRE(get_earned_points(20) == 300);  // 15 points each for 20 widgets
}

