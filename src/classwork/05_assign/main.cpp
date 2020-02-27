#include "rectangle.h"

/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{
	vector<rectangle> boxes{ rectangle(4,5),rectangle(10,10),rectangle(100,10) };
	int total = 0;
	for (auto n : boxes)
	{
		int currArea = n.get_area();
		cout << currArea << "\t";
		total += currArea;
	}
	cout << "\n" << total;

	return 0;
}