#include "main.h"

/**
 * _strcat - concat two strings
 * @dest: destination
 * @src: source
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest += src[i];

	}
	return (dest);
}
