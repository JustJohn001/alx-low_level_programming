#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 *@n the last digit to be printed
 *
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
		if (last_digit < 0)
		{
		last_digit = last_digit * -1;
		}
	_putchar(last_digit + '0');
	return (last_digit);
}
