#include "sort.h"
/**
 * bubble_sort - Sorts an integer array in ascending
 * order using the Bubble Sort algorithm.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Number of elements in the array.
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, s;
	int temp;

	for (s = 0; s < size; s++)
	{

		for (i = 0; i < size && array; i++)
		{

			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				for (j = 0; j < size && array; j++)
				{
					if (j > 0)
						printf(", ");
					printf("%d", array[j]);
				}
				printf("\n");
			}
		}
	}
}
