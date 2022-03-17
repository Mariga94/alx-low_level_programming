#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 *
 * Return: 0 Always
 */

void print_numbers(void)
{
	char i = 0;
	char j = 9;

	while (i <= j)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
