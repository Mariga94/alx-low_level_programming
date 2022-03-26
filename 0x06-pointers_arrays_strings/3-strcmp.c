#include "main.h"

/*
 * _strcmp - compare two strings
 * @s1: string one.
 * @s2: string two.
 *
 * Return: 0 Always.
 */

int _strcmp(char *s1, char *s2)
{
	int i, j,len_s1, len_s2;

	/*find length of both strings */

	for (i = 0; s1[i] != '\0'; i++)
	{
		len_s1 = i;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len_s2 = j;
	}

	if (len_s1 != len_s2)
	{
		return (*s1-*s2);
	}
	else
	{
		for (i = 0; i < len_s1; i++)
		{
			if (s1[i] != s2[i])
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}
	
	}
	return (*s1-*s2);
}
