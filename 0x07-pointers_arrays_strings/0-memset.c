#include "main.h"
#include <stdio.h>
/**
 * _memset - fills n bytes
 * @s: parameter s
 * @b: parameter b
 * @n: parameter n
 *
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;
	
	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
