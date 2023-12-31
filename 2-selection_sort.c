#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the selection sort algorithm.
 * @array: Array to sort.
 * @size: Size of array.
 *
 * Return: Void.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_value;

	for (i = 0; i < size - 1; i++)
	{
		min_value = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min_value)
			{
				min_value = array[j];
			}
		}
        
		if (min_value != array[i])
		{
			int temp = array[i];
			array[i] = min_value;
			array[j - 1] = temp;

			for (j = 0; j < size; j++)
			printf("%d ", array[j]);
		printf("\n");
		}
	}
}
