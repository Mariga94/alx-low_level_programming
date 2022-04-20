#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates functions in an array
 * @array: array of functions
 * @size: size of array
 * @action: callback function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	void (*ptr)(int);

	ptr = action;

	if (array && size && action)
		while (i < size)
		{
			(*ptr)(array[i]);
			i++;
		}
}
