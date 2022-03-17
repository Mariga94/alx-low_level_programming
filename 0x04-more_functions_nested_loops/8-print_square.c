#include "main.h"

/**
 * print_square - function that prints a square
 * @size: The number to be computed
 *
 * Return: 0 Always (Success)
 */

void print_square(int size)
{
	int i = 0;
	int sqr = (size * size);

	while (i < sqr)
	{
		if (i <= 0)
		{
			_putchar('\n');
		}
		else if (i > 0)
		{
			_putchar('#');
		}
		i++;
	}
	_putchar('\n');
}
