/*
File: MergeSort.cpp
Function: a instance that use the merge sort function 
		  defined in MergeSort.h
Author: AlaricZeng
Date: 03/29/2017
*/

#include <iostream>
#include "MergeSort.h"
using namespace std;

int main()
{
	//Try int and float
	int a[] = {5,4,3,2,1};
	float b[] = {1.5, 7.8, 9.0, -0.5, 1.2, 1.8, 19};
	MergeSort<int> (a, 0, 4);
	MergeSort<float> (b, 0, 6);

	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 7; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;

	return 0;	
}