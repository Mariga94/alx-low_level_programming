#include "main.h"

/**
 * print_rev - reverse a string.
 * @s: string to be reversed.
 *
 * Return: reversed string.
 */

void print_rev(char *s)
{
	int length, end;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	for (; end >= 0; end--)
	{
		_putchar(s[end]);
	}

	_putchar('\n');
}
