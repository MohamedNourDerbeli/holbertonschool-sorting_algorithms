#include "sort.h"
/**
 * bubble_sort - Sorts an integer array in ascending
 * order using the Bubble Sort algorithm.
 *
 * @array: Pointer to the array to be swap.
 * @size: Number of elements in the array.
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, s;
	int temp;
	bool swap = false;

	for (s = 0; s < size; s++)
	{

		for (i = 0; i < size - s - 1 && array; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = true;
				for (j = 0; j < size && array; j++)
				{
					if (j != size && j != 0)
						printf(", ");
					printf("%d", array[j]);
				}
				printf("\n");
			}
		}
		if (swap == false)
			break;
	}
}
