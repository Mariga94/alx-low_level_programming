#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: 1st parameter
 * @b: 2nd parameter
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
