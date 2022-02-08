#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Test the Factorial method", "[Factorial]")
{
    SECTION("Positive input, small")
    {
        REQUIRE(Factorial(4) == 24);
    }

    SECTION("Positive input, big")
    {
        REQUIRE(Factorial(12) == 479001600);
    }

    SECTION("Zero input")
    {
        REQUIRE(Factorial(0) == 1);
    }

    SECTION("Negative input, bad input")
    {
        REQUIRE(Factorial(-60) == -1);
    }
}