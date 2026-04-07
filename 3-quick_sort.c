#include "sort.h"
#include "lomuto_partition.c"

/**
 * quick_sort_recursive- recursively quick sorts
 * @array: array to sort
 * @low: left boundary of current partition
 * @high: right boundary of current partition
 * @size: array length
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot - 1, size);
		quick_sort_recursive(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort- quick sorts an array
 * @array: the array to sort
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

