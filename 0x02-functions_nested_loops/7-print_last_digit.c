#include "main.h"

/**
 * print_last_digit - returns last digit
 * @n:The number to be checked
 *
 * Return: 0 Always
 */

int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	return (n % 10);
}

