#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @y: The number to be checked
 * Return: 0 Always
 */
int _abs(int y)
{
	if (y >= 0)
	{
		return (y);
	}
	else if (y < 0)
	{
		return (y * -1);
	}
	return (0);
}
