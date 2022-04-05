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
	int i, j;
	int len_s1 = 0;
	int len_s2 = 0;
	int len = 0;

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

	len = len_s1 + len_s2;
	s = malloc(sizeof(char) * len);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		s[i] = s1[i];

	for (j = 0; j < len_s2; i++, j++)
		s[i] = s2[j];

	return (s);
}
