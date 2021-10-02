// Noah Lindon
// CSCI 230
// 9-26-19
// This program demonstrates the binarySearch and the bubble sort
#include <iostream>
using namespace std;

// Function prototype
int binarySearch(const int[], int, int);
void bubbleSort(int[], int);
void swap(int &, int &);

int main()
{
	const int SIZE = 5;
	// Array with numbers.
	int arr[SIZE] = { 7, 5, 1, 2, 4 };
	int results;   // To hold the search results
	int num;     // To hold the user's number

	// Display the unsorted array.
	cout << "The unsorted array:\n";
	for (auto element : arr)
		cout << element << " ";
	cout << endl;

	// Get a number to search for.
	cout << "Please enter the number you are looking for: ";
	cin >> num;

	// Sort the array.
	bubbleSort(arr, SIZE);

	// Display the sorted array.
	cout << "The sorted arrary:\n";
	for (auto element : arr)
		cout << element << " ";
	cout << endl;

	// Search for the number.
	results = binarySearch(arr, SIZE, num);

	// If results contains -1 the number was not found.
	if (results == -1)
		cout << "Search Not Found!.\n";
	else
	{
		// Otherwise results contains the subscript of
		// the specified number in the array.
		cout << "Search Found!\nThe number was found at element " << results;
		cout << " in the array.\n";
	}
	system("pause");
	return 0;
}

//***************************************************************
// The binarySearch function performs a binary search on an     *
// integer array. array, which has a maximum of size elements,  *
// is searched for the number stored in value. If the number is *
// found, its array subscript is returned. Otherwise, -1 is     *
// returned indicating the value was not in the array.          *
//***************************************************************

int binarySearch(const int array[], int size, int value)
{
	int first = 0,             // First array element
		last = size - 1,       // Last array element
		middle,                // Mid point of search
		position = -1;         // Position of search value
	bool found = false;        // Flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2;     // Calculate mid point
		if (array[middle] == value)      // If value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value)  // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1;           // If value is in upper half
	}
	return position;
}


//*****************************************************************
// The bubbleSort function sorts an int array in ascending order. *
//*****************************************************************
void bubbleSort(int array[], int size)
{
	int maxElement;
	int index;

	for (maxElement = size - 1; maxElement > 0; maxElement--)
	{
		for (index = 0; index < maxElement; index++)
		{
			if (array[index] > array[index + 1])
			{
				swap(array[index], array[index + 1]);
			}
		}
	}
}

//***************************************************
// The swap function swaps a and b in memory.       *
//***************************************************
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
