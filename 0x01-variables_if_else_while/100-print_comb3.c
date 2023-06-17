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
			for (o = n + 1; o < 10; o++)
			{
				putchar(n + '0');
				putchar(o + '0');
				putchar(' ');

				if (n != 8 && o != 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}

	return (0);
}
