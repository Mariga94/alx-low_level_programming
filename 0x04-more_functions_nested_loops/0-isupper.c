#include "main.h"

/**
 * _isupper - Program that checks for uppercase character
 * isupper - man library checks if the passed character is uppercase.
 * @c: Character to be checked.
 *
 * Return: 1 if c is uppercase. 0 otherwise
 *
 */

int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}

