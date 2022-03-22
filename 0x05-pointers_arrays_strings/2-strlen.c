#include "main.h"

/**
 * _strlen - calculate length of s.
 * @s: string to be counted.
 *
 * Return: length of string.
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length += i;
	}
	return (length);
}

