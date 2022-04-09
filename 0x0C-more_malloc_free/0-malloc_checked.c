#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - checks memory allocation
 * @b: int parameter
 *
 * Return: a pointer to the allocated memory. Otherwise value 98
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(sizeof(*s) * b);

	if (s == NULL)
	{
		exit(98);
	}

	return (s);
}
