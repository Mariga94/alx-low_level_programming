#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: input parameter
 *
 * Returns: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_puthchar(str[i]);
		}
	}

	_putchar('\n');
}
