#include "main.h"

/**
 * print_last_digit - returns last digit
 * @c:The number to be checked
 *
 * Return: 0 Always
 */

int print_last_digit(int c)
{
	if (c >= 0)
	{
		_putchar (c % 10 + '0');
		return (c % 10);
	}
	else if (c <= 0)
	{
		int i = c % 10 * -1;

		_putchar(c % 10 * -1 + '0');
		return (i);
	}
}

