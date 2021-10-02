#include <iostream>
using namespace std;

int main()
{
	int years;
	float present_value, future_value, rate;
	cout << "Enter the desired future value: ";
	cin >> future_value;
	cout << "Enter the annual interest rate: ";
	cin >> rate;
	cout << "Enter the number of years the money will grow: ";
	cin >> years;

	present_value = future_value / pow((1 + rate), years);
	cout << "You will need to deposit this amount: " << present_value << endl;

	system("Pause");
	return 0;
}