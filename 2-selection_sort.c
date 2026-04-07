#include "sort.h"

/**
 * selection_sort- selection sorts an array
 * @array: the array to sort
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
/**
 * 1. initalise selector
 * 2. set selector = a[0]
 * 3. while (array){ if < selector then swap selector and array[current],}
 * 4. at the end of the array, append the selector to the sorted string
 */
	int tmp;
	size_t i = 0, j, min;

	if (!array || size < 2)
		return;

	while (i < size - 1)
	{
		min = i;
		j = i + 1;

		while (j < size)
		{
			if (array[j] < array[min])
				min = j;
			j++;
		}

		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
		i++;
	}
}
