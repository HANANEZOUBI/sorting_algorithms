#include "sort.h"

/**
 * swap_ints - Swap two integers in an array
 * @a: The 1st integer to swap
 * @b: The 2nd integer to swap
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sort an array using the selection sort algorithm
 * @array: array of integers
 * @size: size of the array
 *
 * Description: Print the array after each swap
 */

void selection_sort(int *array, size_t size)
{
	int *mn;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		mn = array + i;
		for (j = i + 1; j < size; j++)
			mn = (array[j] < *mn) ? (array + j) : mn;

		if ((array + i) != mn)
		{
			swap_ints(array + i, mn);
			print_array(array, size);
		}
	}
}
