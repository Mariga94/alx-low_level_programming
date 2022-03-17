#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from (0 to 14).
 *
 * Return: 0 Always
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j <= 10)
	{
		while (i <= 14)
		{
			_putchar(i + '0');
			i++;
		}
		j++;
	}
	_putchar('\n');
}
