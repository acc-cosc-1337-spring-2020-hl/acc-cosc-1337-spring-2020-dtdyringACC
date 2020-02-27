#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Bank Account deposit")
{
	BankAccount account(150);
	REQUIRE(account.get_balance() == 150);
	
	REQUIRE_THROWS_AS(account.deposit(-5), InvalidAmount);
	REQUIRE(account.get_balance() == 150);

	account.deposit(50);
	REQUIRE(account.get_balance() == 200);
}