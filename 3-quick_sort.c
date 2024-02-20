#include "sort.h"
#include <stddef.h>

/**
 * swap - swaps two elements in an array
 * @array: the array
 * @size: the size of the array
 * @a: the index of the first element
 * @b: the index of the second element
 */
void swap(int *array, size_t size, int a, int b)
{
int temp = 0;

temp = array[a];
array[a] = array[b];
array[b] = temp;
print_array((const int *)array, size);
}

/**
 * lomuto_partition - partitions the array
 * @array: the array
 * @size: the size of the array
 * @high: the highest index of the array
 * @low: the lowest index of the array
 * Return: size_t
 */
size_t lomuto_partition(int *array, size_t size, ssize_t high, ssize_t low)
{
int i, j, pivot;

pivot = array[high];
for (i = j = low; j < high; j++)
{
if (array[j] < pivot)
{
swap(array, size, i, j);
i++;
}
}
swap(array, size, i, high);
return (i);
}

/**
 * quicksort - quicksort algorithm
 * @array: the array
 * @size: the size of the array
 * @low: the lowest index of the array
 * @high: the highest index of the array
 */
void quicksort(int *array, size_t size, size_t low, size_t high)
{
size_t p;

if (low < high)
{
p = lomuto_partition(array, size, low, high);
quicksort(array, size, low, p - 1);
quicksort(array, size, p + 1, high);
}
}

/**
 * quick_sort - sorts an array of integers in ascending order using Quick sort
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	qs(array, 0, size - 1, size);
}