#include "vec.h"

int main() 
{
	vector<int> nums{ 9,10,99,5,67 };

	loop_vector_w_index(nums);

	//vector<int> num1;
	//num1.push_back(9); adds element to end of vector w/ value 9

	//vector<int> nums2(5, 10); creates vector w/ 5 elements of value 10
	//nums2.at(2); gets element from factor at index 2
	//nums2.size(); gets # of elements in vector
	//nums2.max_size(); gets maximum # of elements poss. in vector

	return 0;
}