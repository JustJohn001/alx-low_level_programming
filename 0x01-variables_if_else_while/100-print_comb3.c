#include <stdio.h>

/**
 * main - prints all possible combination of three digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, o;

		for (n = 0; n < 10; n++)
		{
			for (o = 0; o < 10; o++)
			{
				putchar((n % 10) + '0');
				putchar((o % 10) + '0');
				putchar(' ');

				if (n == 9 && o == 9)
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
