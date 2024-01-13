#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order using
 *                  the Selection Sort algorithm.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Number of elements in the array.
 *
 * Description: This function implements the Selection Sort algorithm to
 *              sort the elements of an array in ascending order.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min, s;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
				continue;
			}
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			for (s = 0; s < size && array; s++)
			{
				if (s != size && s != 0)
					printf(", ");
				printf("%d", array[s]);
			}
			printf("\n");
		}
	}
}
