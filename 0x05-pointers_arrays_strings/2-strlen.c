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

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
