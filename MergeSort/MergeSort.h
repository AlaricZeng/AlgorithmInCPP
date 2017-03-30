/*
File: MergeSort.h
Function: a array as parameter, sort the array from smallest
  		  to largest. The array could be Int, Float, Double,
  		  Char or only type that can judge larger or smaller
Author: AlaricZeng
Date: 03/29/2017
*/

#include <iostream>
using namespace std;

//Merge the two sorted array into one
template <class T>
void Merge(T* arr, int start, int middle, int end)
{
	T* first_arr = new T[middle - start + 1];
	T* second_arr = new T[end - middle];
	int first_q = 0;
	int second_q = 0;

	for (int i = 0; i <= middle - start; i++)
	{
		first_arr[i] = arr[start + i];
	}

	for (int i = 0; i < end - middle; i++)
	{
		second_arr[i] = arr[middle + 1 + i];
	}

	for (int i = start; i <= end; i++)
	{
		if (first_q <= middle - start)
		{
			if ((first_arr[first_q] <= second_arr[second_q]) || second_q > end - middle - 1)
			{
				arr[i] = first_arr[first_q];
				first_q++;
			}
			else
			{
				arr[i] = second_arr[second_q];
				second_q++;
			}
		}
		else
		{
			arr[i] = second_arr[second_q];
			second_q++;
		}
	}
}

//Recruit spliting the array into two [start, middle],
//[middle+1, end]
template <class T> 
void MergeSort(T* arr, int start, int end)
{
	if (start < end)
	{
		int middle = (end + start) / 2;
		MergeSort(arr, start, middle);
		MergeSort(arr, middle + 1, end);
		Merge(arr, start, middle, end);
	}
}