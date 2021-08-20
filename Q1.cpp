

#include <iostream>

using namespace std;
int main()
{
	double length1, width1, length2, width2, area1, area2;
	cout << "Enter the length of first rectangle : ";
	cin >> length1;
	cout << "Enter the width of first rectangle: ";
	cin >> width1;
	cout << "Enter the length of second rectangle : ";
	cin >> length2;
	cout << "Enter the width of second rectangle : ";
	cin >> width2; 
	
	area1 = length1 * width1;
	area2 = length2 * width2;
	if (area1 > area2)
	{
		cout << "Area of first rectangle " << area1 << " is greater than that of second one. " << area2;
	}
	if (area2 > area1)
	{
		cout << "Area of second rectangle " << area2 << " is greater than that of first one. " << area1;
	}
	if (area1 == area2)
	{
		cout << "Areas of both rectangles are equal and is " << area1; 
	}



	return 0;
}