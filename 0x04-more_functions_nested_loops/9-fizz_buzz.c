#include <stdio.h>

/**
 * fizz_buzz - functions that check a number if its a fizz or buzz
 * @num: number to be checked
 *
 * Return: 0 Always
 */

int main(void)
{
	int i = 1;

		while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}


