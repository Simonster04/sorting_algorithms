#include "sort.h"

/**
 * bubble_sort - sorts an array of ints in ascending order
 * @array: array with ints
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, tmp, j, k;

	if (!array)
	{
		return;
	}
	for(i = 0; i < size - 1; i++)
	{
		for(k = 0; k < size - 1; k++)
		{
			if(array[k] > array[k + 1])
			{
				tmp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = tmp;

				for(j = 0; j < size; j++)
				{
					printf("%d", array[j]);
					if (j < size - 1)
					{
						printf(", ");
					}
					else
					{
						printf("\n");
					}
				}
			}
		}
	}
}
