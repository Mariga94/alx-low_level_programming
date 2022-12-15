#include "main.h"
/**
 * print_binary - function the binary representation of a number
 * @n: number of binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i;

	for (i = 1 << 31; i > 0; i >>= 1)
	{
		printf("%u", !!(n & i));
	}
