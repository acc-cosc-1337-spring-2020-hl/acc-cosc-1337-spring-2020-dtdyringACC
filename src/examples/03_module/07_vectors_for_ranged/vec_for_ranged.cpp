#include "vec_for_ranged.h"

/*
Write code for function loop_vector_w_auto with no parameters.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using a for ranged loop with auto as follows: 9 10 99 5  67
*/


/*
Write code for function loop_vector_w_auto with a vector of int pass by value parameter.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows: 9 10 99 5  67
*/
void loop_vector_w_auto(vector<int> nums)
{
	for (auto n : nums)
	{
		cout << n << "\n" ;
		n = 0;
	}
}



/*
Write code for function loop_vector_w_auto with a vector of int pass by reference parameter.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows : 9 10 99 5  67
*/
void loop_vector_w_auto_ref(vector<int>& nums)
{
	for (auto & n : nums)
	{
		cout << n << "\n";
		n = 0;
}

/*
Write code for function loop_vector_w_auto with a vector of int const pass by reference parameter.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows : 9 10 99 5  67
*/
void loop_vector_w_auto_const(const vector<int>& nums)
{
	for (auto & n : nums)
	{
		cout << n << "\n";
	}

}