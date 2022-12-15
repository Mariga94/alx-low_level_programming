#include "main.h"
/**
 * print_binary - function the binary representation of a number
 * @n: number of binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i;

	for (i = 1 << 31; i > 0; i = i / 2)
	{
		(n & i) ? printf("1") : printf("0");
	}
