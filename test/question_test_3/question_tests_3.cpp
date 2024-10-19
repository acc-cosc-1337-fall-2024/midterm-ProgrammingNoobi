#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Celsius to Fahrenheit conversions") {
    REQUIRE(get_fahrenheit(37) == Approx(98.6).epsilon(0.01));
    REQUIRE(get_fahrenheit(25) == Approx(77.0).epsilon(0.01));
    REQUIRE(get_fahrenheit(0) == Approx(32.0).epsilon(0.01));
}
