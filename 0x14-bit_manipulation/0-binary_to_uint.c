#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary number to unsinged int
 * @b: binary number to be converted
 *
 * Return: converted number or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int n = 0;
	int power = 0;

	if (b == '\0')
		return (0);

	while (b[i + 1])
		i++;

	while (i >= 0)
	{
		if (b[i] == '0')
		{
			i--;
			power++;
		}
		else if (b[i] == '1')
		{
			n += (1 << power);
			i--;
			power++;
		}
		else
			return (0);
	}
	return (n);


}

