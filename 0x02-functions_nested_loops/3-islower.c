#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * Return: 1 if 'c' is lowercase
 */

int _islower(int c)
{
	if (islower(c))
	{
		_putchar(c);
	}
	_putchar('\n');
}
