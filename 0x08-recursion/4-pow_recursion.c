#include "main.h"

/**
 * _pow_recursion - returns the value raised ot the power of y
 * @x: number to raise by the power of y
 * @y: the power to raise number x
 * Return: the result of the power, -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
