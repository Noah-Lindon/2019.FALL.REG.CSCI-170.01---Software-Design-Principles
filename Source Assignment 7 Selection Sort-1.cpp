// This program demonstrates the Selection Sort algorithm.
#include <iostream>
using namespace std;

// Function prototypes
void selectionSort(int[], int);
void swap(int &, int &);

int main()
{
	const int SIZE = 5;

	// Array of unsorted values
	int values[SIZE] = { 3, 5, 4, 2, 1 };

	// Sort the array.
	selectionSort(values, SIZE);

	// Display the sorted array.
	cout << "The sorted values:\n";
	for (auto element : values)
		cout << element << " ";
	cout << endl;

	system("pause");
	return 0;
}
// Selection Sort function
void selectionSort(int array[], int size)
{
	int minIndex, minValue;

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = array[start];
		for (int index = start + 1; index < size; index++)
		{
			if (array[index] > minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		swap(array[minIndex], array[start]);
	}
}
// Swap function
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}