#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: The number to be checked.
 * Return: 1 if n greater than zero. 0 if n zero & -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
	return (0);
}
