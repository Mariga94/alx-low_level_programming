#include "main.h"

/**
 * print_last_digit - returns last digit
 * @n:The number to be checked
 *
 * Return: 0 Always
 */

int print_last_digit(int c)
{
	if (c => 0)
	{
	_putchar (c % 10 + '0');
	return (c % 10);
	}
	else
	{
	_putchar (c % 10 * -1);
	return (c % 10);
	}
}
