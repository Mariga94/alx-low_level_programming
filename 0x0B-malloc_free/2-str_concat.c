#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  function that concat two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL if passed. Otherwise pointer to new allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, k;
	int len_s1 = 0;
	int len_s2 = 0;
	int len = 0;

	i = 0;
	while (s1[i] != '\0')
	{
		len_s1++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		len_s2++;
	}

	len = len_s1 + len_s2;
	s = malloc(sizeof(char) * len);

	if (s == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < len; k++)
	{
		s[k] = s1[i];
		s[k] = s2[j];
	}
	s[k] = '\0';

	return (s);
}
