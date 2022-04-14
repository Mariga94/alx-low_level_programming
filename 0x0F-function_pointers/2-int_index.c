#include <stddef.h>
#include "function_pointers.h"


/**
 * int_index - searches for an interger and return its index
 * @array: array
 * @size: size of an array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*p)(int);

	p = cmp;

	if (!array)
		return (-1);
	if (size <= 0)
		return (-1);
	if (!cmp)
		return (-1);
	for (i = 0; i < size; i++)
		if (p(array[i]))
		{
			return (i);
		}
	return (-1);
}
