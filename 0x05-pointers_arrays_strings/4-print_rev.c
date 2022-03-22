#include "main.h"

/**
 * print_rev - reverse a string.
 * @s: string to be reversed.
 *
 * Return: reversed string.
 */

void print_rev(char *s)
{
	int start, length, end;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	for (start = 0; start <= length; start++)
	{
		_putchar(s[end]);
		end--;
	}

	_putchar('\n');
}
