/*
File: HeapSort.h
Function: Achieve the heapsort, for any datatype array(can 
		  compare the value) use max_heap to sort the array
		  from smallest to largest
Author: AlaricZeng
Data: 04/03/2017
*/
template <class T>
void MaxHeapOrder(T*, int, int);
template <class T>
void BuildMaxHeap(T*, int);
template <class T>
void HeapSort(T*, int);

/*
Build a max_heap. In parameters, arr is the array and
length is the number of items in that array
The time complexity would be O(n)
*/
template <class T>
void BuildMaxHeap(T* arr, int length)
{
	/*
	The item with index larger than (length - 1) / 2
	are all leaves
	*/
	for (int i = (length - 1) / 2; i >=0; i--)
	{
		MaxHeapOrder(arr, i, length);
	}
}

/*
Restore the max_heap structure.
For a single parent node, compare it with left
and right children. Exchange it with the largest
child and recruit until get leaves  
*/
template <class T>
void MaxHeapOrder(T* arr, int index, int length)
{
	int leftIndex = index * 2 + 1;
	int rightIndex = index *2 + 2;
	int largestIndex = index;
	
	if (leftIndex < length && arr[index] < arr[leftIndex])
	{
		largestIndex = leftIndex;
	}

	if (rightIndex < length and arr[largestIndex] < arr[rightIndex])
	{
		largestIndex = rightIndex;
	}

	if (largestIndex != index)
	{
		T tempNode = arr[largestIndex];
		arr[largestIndex] = arr[index];
		arr[index] = tempNode;
		MaxHeapOrder(arr, largestIndex, length);
	}
}

/*
HeapSort, exchange the root node(largest item) with the last node
restore the heap property. And let length minus one(since the largest
node already in proper position, we don't need to consider it any more)
*/
template <class T>
void HeapSort(T* arr, int length)
{
	BuildMaxHeap(arr, length);
	while (length > 0)
	{
		T tempNode = arr[0];
		arr[0] = arr[length - 1];
		arr[length - 1] = tempNode;
		length = length - 1;
		MaxHeapOrder(arr, 0, length);
	}
}