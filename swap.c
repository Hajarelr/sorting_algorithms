#include "sort.h"

/**
 * swap - function that switch 2 element of an array
 * @x: element
 * @y: element
 * @array: array to sort
 * @size: size of array
 */

void swap(int *x, int *y, size_t size, int *array)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
	print_array(array, size);
}
