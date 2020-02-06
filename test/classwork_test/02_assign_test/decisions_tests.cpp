#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "decision.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify gross_pay function")
{
	REQUIRE(gross_pay(30, 14.50) == 435);
	REQUIRE(gross_pay(60, 9.50) == 665);
}