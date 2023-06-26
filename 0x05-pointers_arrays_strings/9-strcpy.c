#include "main.h"

/**
 * _strcpy - copies the string pointed to by src including the
 * terminating null byte (\0) to the buffer pointed to by dest
 * @dest: buffer to be pointed to
 * @src: the string to be pointed
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int size;

	for (size = 0; src[size] != '\0'; size++)
	{
		dest[size] = src[size];
	}

	dest[size] = '\0';

	return (dest);
}
