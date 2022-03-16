#include "main.h"

/**
 * int_isalpha - checks alphabetic character
 *
 * Return: 1
 */

int isalpha(int a);
int _isalpha(int c)
{
	if (isalpha(c))
	{
		_printchar('1');
	}
	else 
	{
		__printchar('0');
	}
}

