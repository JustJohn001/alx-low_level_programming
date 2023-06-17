#include <stdio.h>

/**
 * main - prints all possible combination of three digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, o;

		for (n = 0; n < 9; n++)
		{
			for (o = 0; o < 10; o++)
			{
				putchar('0' + n);
				putchar('0' + o);
				putchar(',');
				putchar(' ');
			}
		}

	return (0);
}
