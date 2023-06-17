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
		for (n = m + 1; n < 10; n++)
		{
			for (o = n + 1; o < 10; o++)
			{
				putchar('0' + m);
				putchar('0' + n);
				putchar('0' + o);
				if (m != 7 || n != 8 || o != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
