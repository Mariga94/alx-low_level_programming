#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description - program that prints the alphabet in lowercase.
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	printf("\n");
	return (0);
}
