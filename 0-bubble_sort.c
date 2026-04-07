#include "sort.h"

/**
 * bubble_sort- function that bubble sorts an array
 * @array: an array
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int swaps = 1, tmp;
	size_t i;

	if (!array || size < 2)
		return;

	while (swaps)
	{
		swaps = 0;
		i = 0;
		while (i + 1 < size)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swaps++;
				print_array(array, size);
			}
			i++;
		}
	}
}
