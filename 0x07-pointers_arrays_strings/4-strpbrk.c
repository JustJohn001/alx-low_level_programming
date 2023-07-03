#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: pointer to the string
 * @accept: set of acceptable characters
 * Return: pointer that matches one of the bytes
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *ptr = accept;
			while (*ptr)
			{
				if (*s == *ptr)
				{
					return (s);
				}
				ptr++;
			}
			s++;
	}
	return (NULL);

}
