#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * using the putchar function
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;


	for (n = 0; n < 10;  n++)
	{
		putchar(n + '0');
	}
		putchar(' ');

	return (0);
}
