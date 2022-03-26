#include "main.h"

/**
 * string_toupper - changes all lowercase letters of string to uppercase.
 * @c: array of characters
 * Return: converted string.
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
