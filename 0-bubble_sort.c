#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{

size_t i, k;
int tmp;

if (!array || !size)
return;
i = 0;
while (i < size)

{

for (i = 0; i < size - 1; i++)
{
for (k = 0; k < size - i - 1; k++)
{
if (array[k] > array[k + 1])
{
tmp = array[k];
array[k] = array[k + 1];
array[k + 1] = tmp;
print_array(array, size);
}
}
}
i++;
}
printf("\n");
}