#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

// Test to verify that the GCD function works with specified test cases
TEST_CASE("GCD Test Cases") {
    // Define test cases
    REQUIRE(find_gcd(15, 25) == 5);
    REQUIRE(find_gcd(16, 32) == 16);
    REQUIRE(find_gcd(159, 309) == 3);
}
