#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble Sort algorithm.
 * @array: is the array of integers.
 * @size: is the size of array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, x, n;
	int temp;

	n = size;
	if (array != NULL && n > 0)
	{
		for (i = 1; i < n; i++)
		{
			for (x = 0; x < n - (i - 1); x++)
			{
				if (array[x] > array[x + 1])
				{
					temp = array[x];
					array[x] = array[x + 1];
					array[x + 1] = temp;
					print_array(array, size);
				}
			}
		}
	}
	else
	{
		return;
	}
}
