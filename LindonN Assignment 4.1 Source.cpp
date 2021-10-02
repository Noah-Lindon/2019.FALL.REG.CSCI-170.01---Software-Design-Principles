#include <iostream>
using namespace std;

int main()
{
	double num;
	cout << "This program distinguishes a number as either positive or negative. \n";
	cout << "Enter a number: ";
	cin >> num;

	if (num > 0)
	{
		cout << "The number is positive. ";
	}

	else if (num < 0)
	{
		cout << "The number is negative. ";
	}

	else
	{
		cout << "The number is 0. ";
	}

	system("Pause");
	return 0;
}