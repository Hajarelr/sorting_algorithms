#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 *
 * @array: array to sort
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	int s = 0;
	int e = 0;

	e = size - 1;

	sort(array, s, e, size);
}
