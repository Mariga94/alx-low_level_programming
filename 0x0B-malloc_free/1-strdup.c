#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: string to be duplicated
 *
 * Return: pointer to a new string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}


	duplicate = malloc(sizeof(char) * len);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= len; i++)
		{
			duplicate[i] = str[i];
		}
		duplicate[i] = '\0';

		return (duplicate);
	}
}
