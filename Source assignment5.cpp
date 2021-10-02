#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double money;
	int drink;
	double change;

	double coke = 0.50;
	double sprite = 1.00;
	double dew = 1.25;
	double pepper = 0.75;
	double power = 1.50;

	cout << fixed << showpoint << setprecision(2);
	cout << "Please put the money in: $";
	cin >> money;

	do
	{
		cout << "Please pick your drink:\n"
			<< "1: Coke $0.50\n"
			<< "2: Sprite $1.00\n"
			<< "3: Mtn Dew $1.25\n"
			<< "4: Dr. Pepper $0.75\n"
			<< "5: PowerAde $1.50\n";
		cin >> drink;

		while (drink < 1 || drink > 5)
		{
			cout << "Wrong Option! Please choose a number from 1-5 ";
			cin >> drink;
		}

		if (drink == 1)
		{
			change = money - coke;
			cout << "Your change is $" << change << endl;
		}

		else if (drink == 2)
		{
			change = money - sprite;
			cout << "Your change is $" << change << endl;
		}

		else if (drink == 3)
		{
			change = money - dew;
			cout << "Your change is $" << change << endl;
		}

		else if (drink == 4)
		{
			change = money - pepper;
			cout << "Your change is $" << change << endl;
		}

		else if (drink == 5)
		{
			change = money - power;
			cout << "Your change is $" << change << endl;
		}

		if (change < 0)
		do
		{
			cout << "Choose something you can afford!\n"
				 << "You have " << money << " left to spend.\n\n"
				 << "Please pick your drink:\n"
				 << "1: Coke $0.50\n"
				 << "2: Sprite $1.00\n"
				 << "3: Mtn Dew $1.25\n"
				 << "4: Dr. Pepper $0.75\n"
				 << "5: PowerAde $1.50\n";
			cin >> drink;
		} while (money < 0);

		if (money > 0)
		{
			money = change;
		}

	} while (money > 0);

	cout << "Ending the program because there isn't enough funds left to buy another drink.";

	system("Pause");
	return 0;
}