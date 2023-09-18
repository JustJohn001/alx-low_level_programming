#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to the set of acceptable characters
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found = 1;
	int i;

	while (*s && found)
	{
	found = 0;
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
		{
		length++;
		found = 1;
		break;
		}
	}
	s++;
	}

	return (length);
}
