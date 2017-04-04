/*
File: HeapSort.cpp
Function: An application of HeapSort defined in HeapSort.h
          Try to sort an integer array and a float array
Author: AlaricZeng
Data: 04/03/2017
*/

#include <iostream>
#include "HeapSort.h"
using namespace std;

int main()
{
	int arr1[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
	float arr2[] = {3.8, -0.7, 1.5, -3.5, 6, 9.3, 15};

	int length1 = sizeof(arr1) / sizeof(*arr1);
	int length2 = sizeof(arr2) / sizeof(*arr2);

	HeapSort<int>(arr1, length1);
	HeapSort<float>(arr2, length2);

	for (int i = 0; i < length1; i++)
	{
		cout << arr1[i] << ' ';
	}
	cout << endl;

	for (int i = 0; i < length2; i++)
	{
		cout << arr2[i] << ' ';
	}
	cout << endl;

	return 0;
}