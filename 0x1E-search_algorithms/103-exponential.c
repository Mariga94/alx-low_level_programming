#include "search_algos.h"
/**
 * exponential_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (size == 0 || !array)
		return (-1);
	bound = 1;
	while (bound < size && array[bound] < value)
	{
		bound *= 2;
	}

	return (binary_search(*array, bound / 2, min(bound + 1, size), value));
}
