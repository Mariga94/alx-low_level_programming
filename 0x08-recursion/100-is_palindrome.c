#include "main.h"

/**
 * _strlen_recursion - return length of a string
 * @s: string to be checked
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);


}

/**
 * isPalRec - checks for palidrome
 * @s: string parameter
 * @t: integer parameter
 * @e: interger parameter
 *
 * Returns: 1. 0 Otherwise
 */

int isPalRec(char *s, int t, int e)
{
	if (t == e)
	{
		return (1);
	}
	if (s[t] != s[e])
	{
		return (0);
	}

	if (t < e + 1)
	{
		return (isPalRec(s, s + 1, e - 1));
	}
	return (1);
}



/**
 * is_palindrome - checks if string is palidrome
 * @s: string to be checked
 *
 * Returns: 1 if s is palidrome. Otherwise 0.
 */

int is_palindrome(char *s)
{
	int n = _strlen_recursion(char *s);

	if (n == 0)
	{
		return (1);
	}
	return (isPalRec(s, 0, n - 1));
}

