// Noah Lindon
// CSCI 170
// 10-8-19
#include <iostream>
using namespace std;

int fibo();

int main()
{
	int num = fibo();
	int next;
	int firstNum = 0;
	int secondNum = 1;

	for (int i = 0; i < num; i++)
	{
		cout << firstNum << " ";
		next = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = next;
	}
	system("pause");
	return 0;
}

int fibo()
{
	int num;

	cout << "Type your number for fibonacci series: ";
	cin >> num;

	while (num <= 0)
	{
		cout << "Incorrect number! Type the number greater than 1: ";
		cin >> num;
	}

	return num;
}
