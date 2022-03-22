#include "main.h"

/**
 * *_strcpy(char *dest, char *src) - copies the string pointed to by src
 * @dest: 1st parameter
 * @src: 2nd parameter
 *
 * Return: 0 Always
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
