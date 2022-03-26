#include "main.h"

/**
 * reverse_array - reverse content of array
 * @a: an array of integers
 * @n: number of elements
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
