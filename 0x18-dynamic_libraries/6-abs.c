#include "main.h"

/**
 * _abs - computes teh absolute value of an interger
 *
 *@c: The number to be computed
 *
 *Return: The absolute value of an number or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_value;

	abs_value = c * -1;
	return (abs_value);
	}

	return (c);
}
