#include "main.h"

/**
 * _isdigit - function check for a digit
 * @c: number to be looped
 *
 * Return: 1 if c is a digit. 0 otherwise
 */

int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
