#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, start, end, length;

	i = 0;
	while (s[i] != '\0')
	{
		length = i;
		i++;
	}

	end =  length - 1;

	/*s[end] = '\0';*/

	for (start = 0; start < length; start++)
	{
		s[end];
		end--;
	}
}
