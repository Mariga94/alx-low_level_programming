#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element in the array
 * @size: number of the elements in an array
 * @value: value to search for
 *
 * Return: index of value else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	while ((array[high] != array[low]) && (value >= array[low]) &&
			(value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low) /
				(array[high] - array[low]));
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
