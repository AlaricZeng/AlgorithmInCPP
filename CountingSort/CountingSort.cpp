/*
File: CountingSort.cpp
Function: An application of CountingSort.h,
          self define two integer arrays, using
          counting sort to sort them.
Author: AlaricZeng
Date: 04/17/2017
*/

#include <iostream>
#include "CountingSort.h"
using namespace std;

int main()
{
	int arr1[] = {7, 8, 5, 4, 2, 1, 3, 6, 9};
	int arr2[] = {3, 6, 1, 100, 45, 70, 23, 96, 3, 6, 6, 70};
	int length1 = sizeof(arr1) / sizeof(arr1[0]);
	int length2 = sizeof(arr2) / sizeof(arr2[0]);
	
	CountingSort(arr1, length1);
	CountingSort(arr2, length2);

	for (int i = 0; i < length1; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < length2; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;

	return 0;
}