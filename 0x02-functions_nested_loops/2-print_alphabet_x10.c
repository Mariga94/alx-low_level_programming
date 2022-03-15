#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
