#include "sort.h"

/**
 * quick_sort - sorts an array of integers w/ QUickSOrt
 * @array: array of integers to sort
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	ssize_t low, high;

	low = 0;
	high = size - 1;
	if (!array)
	{
		return;
	}
	quickSort(array, low, high, size);
}

/**
 * quickSort - sorts a partition of array
 * @array: array to be partitionated
 * @low: lowest index in partition
 * @high: highest index in the partition
 * @size: size of the array
 */

void quickSort(int *array, ssize_t low, ssize_t high, size_t size)
{
	size_t pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quickSort(array, low, pivot - 1, size);
		quickSort(array, pivot + 1, high, size);
	}
}

/**
 * partition - stroke the array in parts
 * @array: array to be partitionated
 * @low: lowest index in partition
 * @high: highest index in the partition
 * @size: size of the array
 * Return: index of the partition
 */

size_t partition(int *array, ssize_t low, ssize_t high, size_t size)
{
	int pivot = array[high], tmp;
	ssize_t i = (low - 1), j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[high])
	{
		tmp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}
