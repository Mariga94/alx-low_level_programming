#include "main.h"

/**
 * print_line - function that prints a straight line
 * @n: number to be checked.
 *
 * Return: 0 Always
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
