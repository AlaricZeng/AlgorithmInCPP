/*
File: CountingSort.h
Function: Get an integer array as input, using
          counting sort to sort the array from
          smallest to largest
Author: AlaricZeng
Date: 04/17/2017
*/

void CountingSort(int* arr, int length)
{
	int MAX = 0;
	int* cpArray = new int[length];

	for (int i = 0; i < length; i++)
	{
		if (arr[i] > MAX)
		{
			MAX = arr[i];
		}
		cpArray[i] = arr[i];
	}

	int* valuePool = new int[MAX + 1];
	for (int j = 0; j < MAX + 1; j++)
	{
		valuePool[j] = 0;
	}

	for (int i = 0; i < length; i++)
	{
		valuePool[arr[i]] = valuePool[arr[i]] + 1;
	}

	for (int j = 1; j < MAX + 1; j++)
	{
		valuePool[j] = valuePool[j] + valuePool[j - 1];
	}

	for (int i = length - 1; i >=0; i--)
	{
		valuePool[cpArray[i]] -= 1;
		arr[valuePool[cpArray[i]]] = cpArray[i];
	}
}