#include <stdio.h>

/**
 * main - prints all possible combination of three digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int m, n, o;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			for (o = 0; o < 10; o++)
			{
				putchar(m + '0');
				putchar(n + '0');
				putchar(o + '0');
				if (m !=9 || n != 9 || o != 9)
				putchar(',');
				putchar(' ');
				putchar(' ');
			}
		}
	}

	return (0);
}
