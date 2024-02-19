#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int temp, key, i, j;

	for (i = 0; i < size; i++)
	{
		key = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[key] > array[j])
				key = j;
		}
		if (key != i)
		{
			temp = array[i];
			array[i] = array[key];
			array[key] = temp;
			print_array(array, size);
		}
	}
}
