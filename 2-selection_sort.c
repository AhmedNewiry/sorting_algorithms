#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection Sort algorithm.
 * @array: is the array of integers.
 * @size: is the size of array.
 */
void selection_sort(int *array, size_t size)
{
	size_t n, i, x, num;
	int temp;

	n = size;
	if (array != NULL || n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			num = i;
			for (x = i + 1; x < n; x++)
			{
				if (array[num] > array[x])
				{
					num = x;
				}
			}
			temp = array[i];
			array[i] = array[num];
			array[num] = temp;
			print_array(array, size);
		}
	}
	else
	{
		return;
	}
}
