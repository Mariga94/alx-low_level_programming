#include "main.h"

/**
 * _strlen - calculate length of str
 * @s: string to be counted
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	return (i);
}
