#include "main.h"

/**
 * _pow_recursion - calculates the power of x raised to power of y
 * @x: value to be calculate
 * @y: power
 * Return: power of x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (x == 0)
	{
		return (0);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
