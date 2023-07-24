#include "sort.h"
/**
 * bubble_sort - Function that sorts an array of integers in ascending order
 * using the bubble sort algorithm
 * @array: 1st input
 * @size: 2nd input
 */
void bubble_sort(int *array, size_t size)
{
size_t a = 0;
int b = 0;
int c = 0;
if (!array)
return;
while (array[a])
{
if (a + 1 == size)
{
if (c == 0)
return;
c = 0;
a = 0;
}
if (array[a] > array[a + 1])
{
c++;
b = array[a];
array[a] = array[a + 1];
array[a + 1] = b;
print_array(array, size);
}
a++;
}
}
