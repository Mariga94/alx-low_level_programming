#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 * @size: number of elements in the array
 * @array: pointer to the first element in an array
 * @value: item to be searched in the array
 *
 * Return: index of value else if array is null or value doesn't
 * exist return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t end, start, i;

	start = 0;
	end = floor(sqrt(size));

	while (array[end] <= value && end < size)
	{
		start = end;
		end += floor(sqrt(size));
		if (end > size - 1)
			end = size;
	}

	for (i = start; i < end; i++)
		if (array[i] == value)
			return (i);
	return (-1);
}

