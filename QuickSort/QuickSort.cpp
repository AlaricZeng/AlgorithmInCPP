/*
File: QuickSort.cpp
Function: An application of QuickSort.h. Try sort an integer
		  array and a float array
Author: AlaricZeng
Date: 03/31/2017
*/

#include <iostream>
#include "QuickSort.h"
using namespace  std;

int main()
{
	int a[] = {5, 4, 3, 2, 1};
	float b[] = {5.6, 7.3, 1.2, -5.2, 1.8, 2.0};
	QuickSort<int>(a, 0, 4);
	QuickSort<float>(b, 0, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;

	return 0;
}