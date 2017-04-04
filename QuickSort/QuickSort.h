/*
File: QuickSort.h
Function: took a array as parameter, sort the array from 
 		  smallest to largest by using QuickSort. 
 		  The array could be Int, Float, Double, Char 
 		  or only type that can judge larger or smaller
Author: AlaricZeng
Date: 03/31/2017
*/

#include <iostream>
#include <time.h>
using namespace std;

template <class T>
void QuickSort(T* arr, int start, int end)
{
	if (start < end)
	{
		srand(time(NULL));
		int pivot_id = rand() % (end - start) + start;
		T pivot = arr[pivot_id];

		int front_point = start;
		int tail_point = end;

		while (front_point < tail_point)
		{
			if (arr[front_point] >= pivot && 
				arr[tail_point] <= pivot)
			{
				T tempNum = arr[front_point];
				arr[front_point] = arr[tail_point];
				arr[tail_point] = tempNum;
				front_point++;
				tail_point--;
			}
			else 
			{
				if (arr[front_point] < pivot)
				{
					front_point++;
				}
				if (arr[tail_point] > pivot)
				{
					tail_point--;
				}
			}
		}
		if (tail_point < end)
		{
			QuickSort(arr, start, tail_point);
		}
		if (tail_point + 1 < end)
		{
			QuickSort(arr, tail_point + 1, end);
		}
	}
}
