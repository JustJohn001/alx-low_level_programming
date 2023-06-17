#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * using the putchar function
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(n + '0');
	}

	putchar('\n');
	
	return (0);
}
