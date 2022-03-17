#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 *
 * Return: 0 Always
 */

void print_numbers(void)
{
	int i = 0;
	int j = 9;

	while (i <= j)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
