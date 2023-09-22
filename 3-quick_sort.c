#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - Sorts an array of integers using Quick Sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Description: This function is the entry point for Quick Sort. It performs
 * the initial call to the quicksort function to sort the array.
 *
 * Return: void.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	lumuto_quicksort(array, 0, size - 1, size);
}

/**
 * lomuto_partition - Partitions an array using Lomuto partition scheme.
 * @array: The array to be sorted.
 * @low: The low index of the partition.
 * @high: The high index of the partition.
 * @size: The size of the array.
 *
 * Return: The pivot index after partitioning.
 *
 * Description: This function chooses a pivot, rearranges the elements such
 * that elements less than the pivot are on the left, and elements greater
 * than the pivot are on the right. It returns the pivot index.
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int j,  i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);
	return (i + 1);
}

/**
 * lumuto_quicksort - Sorts an array using Quick Sort algorithm.
 * @array: The array to be sorted.
 * @low: The low index of the partition.
 * @high: The high index of the partition.
 * @size: The size of the array.
 *
 * Description: This function is a recursive implementation of the Quick Sort
 * algorithm. It partitions the array, sorts the partitions recursively, and
 * combines them to obtain the sorted array.
 *
 * Returns: void.
 */
void lumuto_quicksort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
	int pivot_index = lomuto_partition(array, low, high, size);

	lumuto_quicksort(array, low, pivot_index - 1, size);
	lumuto_quicksort(array, pivot_index + 1, high, size);
	}
}

/**
 * swap - Swaps two integers in an array.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function swaps the values of two integers in an array.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
