#include "main.h"

/**
 * _strncat - concat two strings
 * @dest: destination
 * @src: source
 * @n: n bytes
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = n; src[i] != '\0'; i++)
	{
		dest += src[i];
	}
	return (dest);
}
