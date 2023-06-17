#include <stdio.h>

/**
 * main - prints all possible combination of three digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int m, n, o;

	for (m = 0; m < 8; m++)
	{
		for (n = m + 1; n < 9; n++)
		{
			for (o = n + 1; o < 10; o++)
			{
				putchar(m + '0');
				putchar(n + '0');
				putchar(o + '0');
				if (m != 7 || n != 8 || o != 9)
				putchar(',');
				putchar(' ');
				putchar(' ');
			}
		}
	}

	return (0);
}
