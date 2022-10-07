#include "search_algos.h"

/**
 * linear_search - searches for a value on an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to look up in the array
 *
 * Return: first index where value is located else if value is not
 * present or if array is NULL return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
