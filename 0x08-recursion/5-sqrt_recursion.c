#include "main.h"

/**
 * _sqrt_check - checks the input number from n to the base
 * @n: number to return the square root
 * @i: base number to check
 * Return: the square root, -1 if n does not have a natural square root
 */

int _sqrt_check(int n, int i)
{
	if (n * n ==  i)
	{
		return (n);
	}
	if (n * n > i)
	{
		return (-1);
	}

	return (_sqrt_check(n + 1, i));
}

/**
 * _sqrt_recursion - returns the natual square root of a number
 * @n: number to check
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_check(1, n));
}
