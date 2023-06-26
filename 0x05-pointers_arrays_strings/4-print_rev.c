#include<stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	for (size -= 1; size >= 0; size--)
	{
		_putchar(s[size]);
	}
	_putchar('\n');
}
