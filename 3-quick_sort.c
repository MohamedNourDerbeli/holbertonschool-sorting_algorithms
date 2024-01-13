#include "sort.h"
/**
 * quick_sort - Sorts an array of integers in ascending order using Quick Sort.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_recursion(array, 0, size - 1, size);
}
/**
 * quick_sort_recursion - Recursively sorts an array
 * using Quick Sort algorithm.
 * @array: The array to be sorted.
 * @low: The starting index of the array or subarray.
 * @high: The ending index of the array or subarray.
 * @size: The size of the array.
 */
void quick_sort_recursion(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = partition(array, low, high);

		quick_sort_recursion(array, low, pivot_index - 1, size);
		quick_sort_recursion(array, pivot_index + 1, high, size);
		print_array(array, size);
	}
}

/**
 * partition - Partitions the array and returns the pivot index.
 * @array: The array to be partitioned.
 * @low: The starting index of the array or subarray.
 * @high: The ending index of the array or subarray.
 * Return: The index of the pivot element.
 */
int partition(int *array, int low, int high)
{
	int pivot_value = array[high];
	int i = low, j;
	int tmp;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			i++;
		}
	}

	tmp = array[i];
	array[i] = array[high];
	array[high] = tmp;

	return (i);
}
