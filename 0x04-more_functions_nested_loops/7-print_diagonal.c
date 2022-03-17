#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: number to be checked
 *
 * Return: 0 Always
 */

void print_diagonal(int n)
{
	let i = 0;

	while (i <= n)
	{
		if (n > 0)
		{
			_putchar('\');
		}
		else
		{
			putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}

