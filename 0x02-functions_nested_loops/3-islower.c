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
		_putchar(1);
	} 
	else 
	{
		_putchar(0);
	}
	_putchar('\n');
}
