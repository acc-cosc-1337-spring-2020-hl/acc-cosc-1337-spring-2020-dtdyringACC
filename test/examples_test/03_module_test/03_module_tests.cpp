#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "vec.h"
#include "vec_for_ranged.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("verify sum_of_squares function")
{
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(2) == 5);
}

TEST_CASE("verify loop vector w index val")
{
	vector<int> nums{ 9,10,99,5,67 };
	vector<int> expected{ 9,10,99,5,67 };

	loop_vector_w_index(nums);

	REQUIRE(nums == expected);
}

TEST_CASE("verify loop vector w index ref")
{
	vector<int> nums{ 9,10,99,5,67 };
	vector<int> expected{ 0,0,0,0,0 };

	loop_vector_w_index_ref(nums);

	REQUIRE(nums == expected);
}

TEST_CASE("verify loop vector w index const")
{
	vector<int> nums{ 9,10,99,5,67 };
	vector<int> expected{ 9,10,99,5,67 };

	loop_vector_w_index_const(nums);

	REQUIRE(nums == expected);
}

TEST_CASE("verify loop vector w auto")
{
	vector<int> nums{ 9,10,99,5,67 };
	vector<int> expected{ 9,10,99,5,67 };

}