#include "3-calc.h"
/**
 * op_add - add to integers
 * @a: first interger
 * @b: second interger
 * Return: sum of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two intergers
 * @a: first integer
 * @b: second integer
 * Return: difference of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: multiplication of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two intergers
 * @a: first integer
 * @b: second integer
 * Return: division of two numbers
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - returns the remainder
 * @a: first integer
 * @b: second integer
 * Return: remainder of a % b
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
