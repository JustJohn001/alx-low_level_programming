#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int n = strlen(str);
	int size;

		if (n % 2  == 0)
		{
			size = n / 2;
		}
		else
		{
			size = (n + 1) / 2;
		}
		while (str[size] != '\0')
		{
			_putchar(str[size]);
		size++;
		}
	_putchar('\n');
}
