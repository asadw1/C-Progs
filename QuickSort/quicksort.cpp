// Asad Waheed
// File: quicksort.cpp
// Description: Implmentation of the quicksort algorithm with a class
// See main.cpp for compile instructions

#include "quicksort.h"

void QuickSort::quickSort(int arr[], int left, int right)
{
	int
		i = left,
		j = right;

	int temp;

	/* First make a pivot by a defined midpoint of the array */
	int pivot = arr[(left + right) / 2];

	/* Now partition the array around the pivot */
	while( i <= j )
	{
		while( arr[i] < pivot ) // increment elements less than pivot
		{
			i++;
		}
		while( arr[j] > pivot ) // decrement elements more than pivot
		{
			j--;
		}
		if( i <= j ) // if left is still less than/equal to right
		{
			// bubble-sort type swap
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;

			// increment the left element
			i++;

			//decrement the right element
			j--;
		}
	}

	/* Recursive Calls */
	if(left < j)
		quickSort(arr, left, j);
	if(i < right)
		quickSort(arr, i, right);
}
