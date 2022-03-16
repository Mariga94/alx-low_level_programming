#include "main.h"

/**
 * print_last_digit - returns last digit
 * @i:The number to be checked
 *
 * Return: 0 Always
 */

int print_last_digit(int i)
{
	int n;

	n = i % 10;

	if (n < 0)
	{
		n = (-1 * n);
	}

	_putchar(n + '0');
	return (n);
}
