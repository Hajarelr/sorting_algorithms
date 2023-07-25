#include "sort.h"
/**
 * swap - function to switch 2 elements
 * @a: first lement
 * @b: second element
 * @array: array
 * @size: size of array
 */
void swap(int *a, int *b, size_t size, int *array)
{
int tmp = *a;
*a = *b;
*b = tmp;
print_array(array, size);
}
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
int p = array[e], a, b;
a = (s - 1);
for (b = s; b <= e; b++)
{
if (array[b] < p)
{
a++;
if (a != b && a >= 0)
swap(&array[a], &array[b], size, array);
}
}
if (array[e] != array[a + 1])
swap(&array[a + 1], &array[e], size, array);
return (a + 1);
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
