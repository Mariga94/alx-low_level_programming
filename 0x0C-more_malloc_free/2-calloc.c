#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array
 * @size: size of elements
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (nmemb == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = 0;
	}

	return (arr);
}

