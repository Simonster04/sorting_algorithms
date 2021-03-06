#include "sort.h"

/**
 * bubble_sort - sorts an array of ints ascending
 * @array: array with ints
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, tmp, k;

	if (!array)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				tmp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
