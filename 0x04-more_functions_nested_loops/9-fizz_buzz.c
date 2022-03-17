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
		if (num % 3 == 0)
		{
			_putchar("Fizz");
		}
		else if (num % 5 == 0)
		{
			_putchar("Buzz");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			_putchar("FizzBuzz");
		}
		else
		{
			_putchar(num);
		}
		i++;
	}
	_putchar('\n');
}


