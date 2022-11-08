#include "sort.h"
/**
 * partition - sections an array using Lomuto algorithm.
 * @array: the list of integers
 * @low: the start index of array.
 * @high: the last index of array.
 * @size: the size of array.
 * Return: the position of pivot.
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, k, r, temp;

	pivot = array[high];
	r = low - 1;
	for (k = low; k <= high; k++)
	{
		if (array[k] <= pivot)
		{
			r++;
			if (r != k)
			{
				temp = array[r];
				array[r] = array[k];
				array[k] = temp;
				print_array(array, size);
			}
		}
	}
	return (r);
}


/**
 * partition_sort - sorts array.
 * @array: list of numbers
 * @low: first index of array
 * @high: last index of array
 * @size: size of array
 */
void partition_sort(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		partition_sort(array, low, pi - 1, size);
		partition_sort(array, pi + 1, high, size);
	}
}


/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick Sort algorithm.
 * @array: the list of integers
 * @size: the size of array
 */
void quick_sort(int *array, size_t size)
{
	int first_element, last_element;

	first_element = 0;
	last_element = size - 1;
	partition_sort(array, first_element, last_element, size);
}
