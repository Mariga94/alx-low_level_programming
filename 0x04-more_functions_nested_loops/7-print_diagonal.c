#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: number to be checked
 *
 * Return: 0 Always
 */

void print_diagonal(int n)
{
	int i = 1;
	int j = 1;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}

