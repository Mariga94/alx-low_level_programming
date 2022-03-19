#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: number to be checked
 *
 * Return: 0 Always
 */

void print_triangle(int size)
{
	int i, j = 0;
	int x;

	if (size > 0)
	{
		while (i < size)
		{
			x = size - i - 1;
			while (x < size)
			{
				if (x > j)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				j++;
			}
			i++;
			j = 0;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

