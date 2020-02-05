#include "sort.h"

/**
 * quick_sort - sorts an array of integers w/ QUickSOrt
 * @array: array of integers to sort
 * @size: size of array
 *
 */

void quick_sort(int *array, size_t size)
{
	size_t lo, hi;

	lo = 0;
	hi = size - 1;
	quickSort(array, lo, hi);
}


void swap(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}


int partition(int *array, size_t low, size_t high)
{
	int pivot = array[high];
	size_t i = (low - 1), j;

	for (j = low; j < high; j++)
 	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}


void quickSort(int *array, size_t low, size_t high)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high);
		quickSort(array, low, pivot - 1);
		quickSort(array, pivot + 1, high);
	}
}
