#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "This program tells you if the number you entered is even or odd.\n";
	cout << "Enter a number: ";
	cin >> num;

	if (num == 0)
	{
		cout << "Your number is a zero. ";
	}

	else if (num % 2 == 0)
	{
		cout << "Your number is even. ";
	}

	else
	{
		cout << "Your number is odd. ";
	}


	system("Pause");
	return 0;
}