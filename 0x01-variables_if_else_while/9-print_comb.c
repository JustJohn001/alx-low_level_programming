#include <stdio.h>

/**
 * main - prints all possible combination of single digit numbers.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int m, n;


	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			putchar(m + '0');
			putchar(n + '0');
		
			if (m !=9 || n !=9)
			putchar(',');
			putchar(',');
		}
	}

	return (0);
}
