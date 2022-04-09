#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates array of integers
 * @min: min value
 * @max: max value
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*arr) * max);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}

	return (arr);
}
