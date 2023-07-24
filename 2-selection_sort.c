#include "sort.h"

/**
 * selection_sort - function that sorts an array of
 * integers in ascending order using the Selection sort algorithm
 * @array: array to sort
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int t_prev = 0, t_min = 0, m = 0, f = 0;
	size_t i = 0, p = 0;

	if (!array || size <= 0)
		return;

	t_min = array[0];
	t_prev = t_min;

	while (array[i])
	{
		if (i + 1 == size)
		{
			if (f == 0)
			{
				m = p;
			}
			array[m] = t_prev;
			array[p] = t_min;
			if (f > 0)
			{
				print_array(array, size);
				f = 0;
			}
			if ((p == size - 2 && f == 0) || p == size - 2)
				return;
			p++;
			i = p;
			t_min = array[p];
			t_prev = t_min;
		}
		if (t_min > array[i + 1])
		{
			f = 1;
			t_min = array[i + 1];
			m = i + 1;
		}
		i;
	}
}
