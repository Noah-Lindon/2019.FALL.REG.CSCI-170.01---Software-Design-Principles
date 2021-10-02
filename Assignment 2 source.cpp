#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	int num1 = 126;
	int num2 = 75;
	int num3 = 576;
	bitset<7>b(num1);

	cout << b << num1 << endl;
	cout << oct << num1 << endl;
	cout << hex << num1 << endl;

	cout << b << num2 << endl;
	cout << oct << num2 << endl;
	cout << hex << num3 << endl;

	cout << b << num3 << endl;
	cout << oct << num3 << endl;
	cout << hex << num3 << endl;

	system("Pause");
	return 0;
}