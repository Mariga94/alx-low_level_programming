#include "main.h"

/**
* print_alphabet - print lowercase alphabets
*
* Return: 0 Always (Success)
*/


void print_alphabet(void)
{
	/* function call */
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
