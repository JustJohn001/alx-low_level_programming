#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be appended
 * @src: string to append
 * @n: the maximum number of bytes to concatenate
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_size = 0;
	int i;

	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_size++] = src[i];
	}

	dest[dest_size] = '\0';

	return (dest);
}
