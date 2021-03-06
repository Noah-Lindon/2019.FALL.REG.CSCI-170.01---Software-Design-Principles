// This program demonstrates the insertion sort algorithm.
#include <iostream> 
using namespace std;

void insertionSort(int arr[], int n)
{
	int i;
	int key;
	int j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] < key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void displayArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[5] = { 3, 2, 1, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
	displayArray(arr, n);

	system("pause");
	return 0;
}