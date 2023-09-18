#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: The size of a string
 */

int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
