#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _islower - checks for lowercase character.
 * islower - checks whether the passed character is a lowercase letter
 * @a: the number to be checked
 *
 * Return: 1 if 'c' is lowercase. 0 Otherwise
 */
int islower(int a);
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}


/**
 * _isalpha - checks alphabetic character
 * isalpha - checks if the passed character is alphabetic.
 * @a: The number to be checked
 *
 * Return: 1 if c is alphabetic. 0 otherwise
 */

int isalpha(int a);
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}

/**
 * _abs - Computes the absolute value of an integer
 * @y: The number to be checked
 * Return: 0 Always
 */
int _abs(int y)
{
	if (y >= 0)
	{
		return (y);
	}
	else if (y < 0)
	{
		return (y * -1);
	}
	return (0);
}

/**
 * main - Entry point
 *
 * Return: on success 0.
 */

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}

/**
 * _isupper - Program that checks for uppercase character
 * isupper - man library checks if the passed character is uppercase.
 * @c: Character to be checked.
 *
 * Return: 1 if c is uppercase. 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

/**
 * _isdigit - function check for a digit
 * @c: number to be checked
 *
 * Return: 1 if c is a digit. 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

/**
 * _strlen - calculate length of s.
 * @s: string to be counted.
 *
 * Return: length of string.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: 1st parameter
 * @src: 2nd parameter
 *
 * Return: 0 Always
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 *_atoi - converts a string to an integer.
 *@s: pointer to string.
 *
 *Return: integer gotten.
 */
int _atoi(char *s)
{
	int index, ind2;
	unsigned int res;
	int sign = 1;
	char now;

	index = 0;
	res = 0;
	while (*(s + index) != '\0')
	{
		now = *(s + index);
		if (now == '-')
		{
			sign *= -1;
		}
		if (now >= '0' && now <= '9')
		{
			ind2 = index;
			while (*(s + ind2) > 47 && *(s + ind2) < 58)
			{
				res = (res * 10) + *(s + ind2) - '0';
				ind2++;
			}
			break;
		}
		index++;
	}
	if (sign < 0)
		res *= sign;
	return (res);
}

/**
 * _strncat - concat two strings
 * @dest: destination
 * @src: source
 * @n: n bytes
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * _strncpy - copies a string.
 * @dest: destination
 * @src: source
 * @n: bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

/**
 * _strcmp - compare two strings
 * @s1: string one.
 * @s2: string two.
 *
 * Return: 0 Always.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

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

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: size
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;


	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

/**
 * _strchr - function that locates a character in a string.
 * @s: the string to be searched
 * @c: the character to be searched
 *
 * Return: a pointer to the first occurrence of c.
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

/**
 * _strspn - get the length of a prefix substring
 * @s: string to be checked
 * @accept: length to check for
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					len++;
				}
			}
		}
		else
		{
			return (len);
		}
	}
	return (len);
}

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

/**
 * _strstr - functions that locates a substring
 * @haystack: string to be checked
 * @needle: charater to check inside the haystack
 *
 * Return: a pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
