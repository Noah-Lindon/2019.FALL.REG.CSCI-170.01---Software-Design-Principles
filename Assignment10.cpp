// This program calculates the distance between 2 points
// Noah Lindon
// CSCI 170
// 12/1/19
#include <iostream>
#include <cmath>
using namespace std;

struct coordinate
{
	int x;
	int y;
};

int main()
{
	struct coordinate coord1, coord2;
	double distance;

	cout << "Enter the first X coordinate: ";
	cin >> coord1.x;
	cout << "Enter the first Y coordinate; ";
	cin >> coord1.y;

	cout << "Enter the second X coordinate: ";
	cin >> coord2.x;
	cout << "Enter the second Y coordinate: ";
	cin >> coord2.y;

	distance = sqrt((double)(coord2.x - coord1.x) * (coord2.x - coord1.x) + (coord2.y - coord1.y) * (coord2.y - coord1.y));

	cout << "The distance between the 2 points is: " << distance << endl;


	system("pause");
	return 0;
}
