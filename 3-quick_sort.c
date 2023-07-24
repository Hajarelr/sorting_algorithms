#include "sort.h"
/**
 * partition - function that calculates the index of the pivot
 * @array: array to sort
 * @s: the first element in the array
 * @e: the last element in the array
 * @size: size of array
 * Return: index of pivot
 */
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

int partition(int *array, int s, int e, size_t size)
{
	int p = array[e], i, j;

	i = (s - 1);

	for (j = s; j <= e; j++)
	{
		if (array[j] < p)
		{
			i++;
			if (i != j && i >= 0)
				swap(&array[i], &array[j], size, array);
		}
	}
	if (array[e] != array[i + 1])
		swap(&array[i + 1], &array[e], size, array);

	return (i + 1);
}

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
		sort(array, s, p - 1, size);
		sort(array, p + 1, e, size);
	}
}


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
