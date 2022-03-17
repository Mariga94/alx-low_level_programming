#include "main.h"

/**
 * _isupper - Program that checks for uppercase character
 * isupper - man library checks if the passed character is uppercase.
 * @n: Character to be checked.
 *
 * Return: 1 if c is uppercase. 0 otherwise
 *
 */
int isupper(int n);
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

