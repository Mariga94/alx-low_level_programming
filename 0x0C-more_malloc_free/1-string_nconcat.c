#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number
 *
 * Return: pointer to a newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len_s1, len_s2, i, j;

	len_s1 = 0;
	len_s2 = 0;

	if (s1 == 0)
	{
		s1 = "";
	}

	if (s2 == 0)
	{
		s2 = "";
	}

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}

	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	s = malloc(sizeof(*s) * (len_s1 + len_s2));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		s[i] = s1[i];
	}
	if (n >= len_s2)
	{
		for (j = 0; j < len_s2; i++, j++)
		{
			s[i] = s2[j];
		}
	}
	else
	{
	for (j = n; j < len_s2;i++, j++)
	{
		s[i] = s2[j];
	}
	}
	return (s);

}
