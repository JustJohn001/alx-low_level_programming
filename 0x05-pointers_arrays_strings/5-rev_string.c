#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int start_of_string = 0;
	int end_of_string = 0;
	char c;

	while (s[end_of_string] != '\0')
	{
		end_of_string++;
	}
	end_of_string--;

	while (start_of_string < end_of_string)
	{
		c = s[start_of_string];
		s[start_of_string] = s[end_of_string];
		s[end_of_string] = c;

		start_of_string++;
		end_of_string--;
	}
}
