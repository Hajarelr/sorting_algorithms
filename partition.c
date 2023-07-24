#include "sort.h"
/**
 * partition - function that calculates the index of the pivot
 * @array: array to sort
 * @s: the first element in the array
 * @e: the last element in the array
 * @size: size of array
 * Return: index of pivot
 */

int partition(int *array, int s, int e, size_t size)
{
	int p = array[e], i, j;

	i = (start - 1);

	for (j = s; j <= e; j++)
	{
		if (array[j] < p)
		{
			i++;
			if (i != j && i >= 0)
				swap(&array[i], &array[j], size, array);
		}
	}
	if (array[end] != array[i + 1])
		swap(&array[i + 1], &array[end], size, array);

	return (i + 1);
}
