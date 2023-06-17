#include <stdio.h>

/**
 * main - prints all possible combination of three digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, o;

		for (n = 0; n < 99; n++)
		{
			for (o = n + 1; o < 100; o++)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				putchar(' ');
				putchar((o / 10) + '0');
				putchar((o % 10) + '0');

				if (n == 98 && n == 99)
				{
				continue;
				}
				
				putchar(',');
				putchar(' ');
			}
		}

	putchar('\n');
	return (0);
}
