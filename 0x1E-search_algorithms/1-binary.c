#include "search_algos.h"
#include <math.h>
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element in an array
 * @size: number of the elements in an array
 * @value: item to be checked in an array
 *
 * Return: index of the value found else if value is not present in
 * array or if array is NULL return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t middle, min, max;
	int current;

	min = 0;
	max = size - 1;

	while (min <= max)
	{
		middle = floor((min + max) / 2);
		current = array[middle];

		if (current < value)
			min = middle + 1;
		else if (current > value)
			max = middle - 1;
		else
			return (middle);
	}
	return (-1);
}

