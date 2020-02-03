#include "sort.h"

/**
 * selection_sort - sorts an array of integers w/ selectionsort
 * @array: array of integers to sort
 * @size: size of array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int tmp;

	if (!array)
	{
		return;
	}

	for(i = 0; i < size - 1; i++)
	{
		min = i;
		for(j = i; j < size; j++)
		{
			if(array[j] < array[min])
			{
				min = j;
			}
		}
		if(array[i] == array[min])
		{
			continue;
		}
		else
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
		}
		print_array(array, size);
	}
}
