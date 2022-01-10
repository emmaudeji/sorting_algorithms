#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: An array of integers
 * @size: The size of the array
 * Return: returns void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp; /* Temporal variable */

	if (array == NULL || size < 2)
	{
		return;
	}

	/* Tranverse the array */
	for (i = 0; i < size - 1; i++)
	{
		/* loop to Compare */
		for (j = 0; j < size - i - 1; j++)
		{
		/* check if the number in the left is bigger than number in the right */
			if (array[j] > array[j + 1])
			{
				/* Swap positions */
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
