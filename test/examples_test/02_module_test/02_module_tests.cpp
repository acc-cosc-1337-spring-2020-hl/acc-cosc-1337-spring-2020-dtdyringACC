#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_generation function")
{
	REQUIRE(get_generation(1999) == "Centenial");
	REQUIRE(get_generation(1989) == "Millenial");
	REQUIRE(get_generation(1969) == "Generation X");
	REQUIRE(get_generation(1949) == "Baby boomer");
	REQUIRE(get_generation(1932) == "Silent Generation");
	REQUIRE(get_generation(2020) == "Invalid Year");
}

TEST_CASE("Verify menu function")
{
	REQUIRE(menu(1) == "Option 1");
	REQUIRE(menu(2) == "Option 2");
	REQUIRE(menu(3) == "Option 3");
	REQUIRE(menu(4) == "Option 4");
	REQUIRE(menu(0) == "Invalid Option");
	REQUIRE(menu(9) == "Invalid Option");
}