#include "main.h"

/**
 * fizz_buzz - functions that check a number if its a fizz or buzz
 * @num: number to be checked
 *
 * Return: 0 Always
 */

int fizz_buzz(int num)
{
	int i = 0;

	while (i <= num)
	{
		if (i % 3 == 0)
		{
			_putchar("Fizz");
		}
		else if (i % 5 == 0)
		{
			_putchar("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar("FizzBuzz");
		}
		else
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}


