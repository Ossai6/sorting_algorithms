#include "sort.h"


/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 * bubble sort algorithm
 * @array: array of integers to be sorted
 * @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	int flag;
	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag = 1
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
