#include "sort.h"
/**
 * sort - function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 *
 * @array: array to sort
 * @s: start of array
 * @e: end of array
 * @size: size of array
 */

void sort(int *array, int s, int e, size_t size)
{
	int p = 0;

	if (e > s)
	{
		p = partition(array, s, e, size);
		quicksort(array, s, p - 1, size);
		quicksort(array, p + 1, e, size);
	}
}

