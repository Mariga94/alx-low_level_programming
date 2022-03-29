#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - function locates the first occurrence in the string s.
 * @s: string to be checked
 * @accept: parameter check
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept.
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
