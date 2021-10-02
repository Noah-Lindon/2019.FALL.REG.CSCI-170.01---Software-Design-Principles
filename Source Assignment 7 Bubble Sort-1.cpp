// This program demonstrates the Bubble Sort
#include <iostream>
using namespace std;

void bubbleSort(int[], int);
void swap(int &, int &);

int main()
{
	// Array declaration
	const int SIZE = 5;
	int values[SIZE] = { 3, 5, 4, 2, 1 };
	// Calls the Bubble sort function and includes the array for sorting
	bubbleSort(values, SIZE);
	// Output
	cout << "The sorted values:\n";
	for (auto element : values)
		cout << element << " ";
	cout << endl;

	system("pause");
	return 0;
}
// Bubble sort function
void bubbleSort(int array[], int size)
{
	int max;
	int index;

	for (max = size - 1; max > 0; max--)
	{
		for (index = 0; index < max; index++)
		{
			if (array[index] < array[index + 1])
			{
				swap(array[index], array[index + 1]);
			}
		}
	}
}
// Swap function
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}