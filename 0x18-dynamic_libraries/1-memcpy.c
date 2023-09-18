#include "main.h"

/**
 * _memcpy - copeis memory area
 * area pointed to by s with the constant byte b
 * @src: source memory area
 * @dest: destination memory area
 * @n: number of bytes from the memory area
 * Return: a pointer to the memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
